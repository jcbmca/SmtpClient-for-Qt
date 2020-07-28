#include <QDebug>

#include <QSettings>
#include <QFileDialog>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "../../src/SmtpMime"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initSettings("JCB Software", "Ejemplo5Smtp");

    createConnections();

    loadSettings();
}

MainWindow::~MainWindow()
{
    saveSettings();
    delete ui;
}

void MainWindow::initSettings(const QString orgName, const QString appName)
{
#if defined(Q_OS_WIN)
    m_settings = new QSettings(QSettings::IniFormat, QSettings::UserScope ,orgName, appName, this);
#elif defined(Q_OS_LINUX)
    m_settings = new QSettings(QSettings::NativeFormat, QSettings::UserScope ,orgName, appName, this);
#endif


}

void MainWindow::closeSlot()
{
    this->close();
}

void MainWindow::sendMailSlot()
{
    QString server = ui->servidorLineEdit->text().trimmed();
    int port = ui->puertoSpinBox->value();
    SmtpClient::ConnectionType seguridad = (SmtpClient::ConnectionType) ui->seguridadComboBox->currentIndex();


    SmtpClient smtp( server, port, seguridad);

    // We need to set the username (your email address) and the password
    // for smtp authentification.

    int autenticacion = ui->autenticacionComboBox->currentIndex();
    if( autenticacion ) {
        QString usuario = ui->usuarioLineEdit->text();
        QString password = ui->claveLineEdit->text();
        smtp.setUser( usuario );
        smtp.setPassword( password );
    }

    // Now we create a MimeMessage object. This will be the email.

    MimeMessage message;

    QString deNombre = ui->deNombreLineEdit->text();
    QString deCorreo = ui->deCorreoLineEdit->text();
    message.setSender(new EmailAddress( deCorreo, deNombre));

    QString paraCorreo = ui->paraLineEdit->text();
    message.addRecipient(new EmailAddress( paraCorreo, "")); //quien recibe
    QString asunto = ui->asuntoLineEdit->text();
    message.setSubject( asunto ); //titulo

    MimeText text;

    QString cuerpo = ui->cuerpoTextEdit->toPlainText();
    text.setText(cuerpo);

    // Now add it to the mail

    message.addPart(&text);

    // Now we can send the mail
    MimeFile *archivo_adjunto;
    int count = ui->adjuntosListWidget->count();
    for( register short f=0 ; f<count ; f++) {
        QString file_name = ui->adjuntosListWidget->item(f)->text();
        archivo_adjunto = new MimeFile( new QFile(file_name));
        message.addPart(archivo_adjunto);
    }



    smtp.connectToHost();

    if( autenticacion )
        smtp.login();

    if (smtp.sendMail(message))
        qDebug() << "OK";
    else
        qDebug() << "Fails";

    smtp.quit();

}

void MainWindow::agregarAdjuntoSlot()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFiles);
    dialog.setViewMode(QFileDialog::Detail);
    if (dialog.exec()) {
        QStringList fileNames;
        fileNames = dialog.selectedFiles();
        foreach (QString var, fileNames) {
            ui->adjuntosListWidget->addItem(var);
        }
    }

}

void MainWindow::quitarAdjuntoSlot()
{
    qDeleteAll(ui->adjuntosListWidget->selectedItems());

}

void MainWindow::createConnections()
{
    QObject::connect(ui->closePushButton, &QPushButton::clicked, this,
                     &MainWindow::close);
    QObject::connect(ui->enviarPushButton, &QPushButton::clicked, this,
                     &MainWindow::sendMailSlot);
    QObject::connect(ui->agregarToolButton, &QToolButton::clicked, this,
                     &MainWindow::agregarAdjuntoSlot);
    QObject::connect(ui->quitarToolButton, &QToolButton::clicked, this,
                     &MainWindow::quitarAdjuntoSlot);

}

void MainWindow::loadSettings()
{
    m_settings->beginGroup( "MainWindow");
    this->move( m_settings->value( "pos", QPoint(0,0) ).toPoint() );
    this->setGeometry( m_settings->value( "geometry", QRect(0,0, 500, 400) ).toRect() );
    m_settings->endGroup();

    m_settings->beginGroup( "SMPT" );
    ui->servidorLineEdit->setText( m_settings->value( "server", "Server" ).toString() );
    ui->puertoSpinBox->setValue( m_settings->value( "puerto", 0 ).toInt() );
    ui->seguridadComboBox->setCurrentIndex( m_settings->value( "seguridad", 0).toInt() );
    ui->autenticacionComboBox->setCurrentIndex( m_settings->value( "autenticacion", 0).toInt() );
    ui->usuarioLineEdit->setText( m_settings->value( "usuario", "Usuario" ).toString() );
    ui->claveLineEdit->setText( m_settings->value( "clave", "" ).toString() );
    m_settings->endGroup();

    m_settings->beginGroup( "Email" );
    ui->deNombreLineEdit->setText( m_settings->value( "deNombre", "" ).toString() );
    ui->deCorreoLineEdit->setText( m_settings->value( "deCorreo", "" ).toString() );
    ui->paraLineEdit->setText( m_settings->value( "para", "" ).toString() );
    ui->asuntoLineEdit->setText( m_settings->value( "asunto", "").toString() );
    ui->cuerpoTextEdit->setText( m_settings->value( "cuerpo", "").toString() );
    m_settings->endGroup();

}

void MainWindow::saveSettings()
{
    m_settings->beginGroup( "MainWindow" );
    m_settings->setValue( "pos", this->pos() );
    m_settings->setValue( "geometry", this->geometry() );
    m_settings->endGroup();

    m_settings->beginGroup( "SMPT" );
    m_settings->setValue( "server", ui->servidorLineEdit->text().trimmed() );
    m_settings->setValue( "puerto", ui->puertoSpinBox->value() );
    m_settings->setValue( "seguridad", ui->seguridadComboBox->currentIndex() );
    m_settings->setValue( "autenticacion", ui->autenticacionComboBox->currentIndex() );
    m_settings->setValue( "usuario", ui->usuarioLineEdit->text().trimmed() );
    m_settings->setValue( "clave", ui->claveLineEdit->text() );
    m_settings->endGroup();

    m_settings->beginGroup( "Email" );
    m_settings->setValue( "deNombre", ui->deNombreLineEdit->text() );
    m_settings->setValue( "deCorreo", ui->deCorreoLineEdit->text() );
    m_settings->setValue( "para", ui->paraLineEdit->text() );
    m_settings->setValue( "asunto", ui->asuntoLineEdit->text() );
    m_settings->setValue( "cuerpo", ui->cuerpoTextEdit->toPlainText() );
    m_settings->endGroup();


    m_settings->sync();
}
