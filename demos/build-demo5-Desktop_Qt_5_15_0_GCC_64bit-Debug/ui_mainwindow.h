/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *servidorLineEdit;
    QLabel *label_2;
    QSpinBox *puertoSpinBox;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *seguridadComboBox;
    QLabel *label_5;
    QComboBox *autenticacionComboBox;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *usuarioLineEdit;
    QLabel *label_15;
    QLineEdit *claveLineEdit;
    QFrame *frame_3;
    QGridLayout *gridLayout_4;
    QToolButton *quitarToolButton;
    QSpacerItem *verticalSpacer;
    QLabel *label_13;
    QListWidget *adjuntosListWidget;
    QTextEdit *cuerpoTextEdit;
    QLabel *label_14;
    QToolButton *agregarToolButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *enviarPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closePushButton;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *label_11;
    QLineEdit *deNombreLineEdit;
    QLabel *label_10;
    QLabel *label_9;
    QLineEdit *deCorreoLineEdit;
    QLineEdit *paraLineEdit;
    QLineEdit *asuntoLineEdit;
    QFrame *line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(557, 490);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        servidorLineEdit = new QLineEdit(centralwidget);
        servidorLineEdit->setObjectName(QString::fromUtf8("servidorLineEdit"));

        horizontalLayout_2->addWidget(servidorLineEdit);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        puertoSpinBox = new QSpinBox(centralwidget);
        puertoSpinBox->setObjectName(QString::fromUtf8("puertoSpinBox"));
        puertoSpinBox->setMaximum(69536);

        horizontalLayout_2->addWidget(puertoSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_4);

        seguridadComboBox = new QComboBox(centralwidget);
        seguridadComboBox->addItem(QString());
        seguridadComboBox->addItem(QString());
        seguridadComboBox->addItem(QString());
        seguridadComboBox->setObjectName(QString::fromUtf8("seguridadComboBox"));

        horizontalLayout_3->addWidget(seguridadComboBox);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        autenticacionComboBox = new QComboBox(centralwidget);
        autenticacionComboBox->addItem(QString());
        autenticacionComboBox->addItem(QString());
        autenticacionComboBox->setObjectName(QString::fromUtf8("autenticacionComboBox"));

        horizontalLayout_3->addWidget(autenticacionComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        verticalLayout->addWidget(label_16);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        usuarioLineEdit = new QLineEdit(centralwidget);
        usuarioLineEdit->setObjectName(QString::fromUtf8("usuarioLineEdit"));

        horizontalLayout_4->addWidget(usuarioLineEdit);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_4->addWidget(label_15);

        claveLineEdit = new QLineEdit(centralwidget);
        claveLineEdit->setObjectName(QString::fromUtf8("claveLineEdit"));
        claveLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(claveLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(1);
        quitarToolButton = new QToolButton(frame_3);
        quitarToolButton->setObjectName(QString::fromUtf8("quitarToolButton"));
        sizePolicy.setHeightForWidth(quitarToolButton->sizePolicy().hasHeightForWidth());
        quitarToolButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        quitarToolButton->setIcon(icon);

        gridLayout_4->addWidget(quitarToolButton, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 4, 2, 2, 1);

        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 1, 0, 1, 1);

        adjuntosListWidget = new QListWidget(frame_3);
        adjuntosListWidget->setObjectName(QString::fromUtf8("adjuntosListWidget"));
        adjuntosListWidget->setMaximumSize(QSize(16777215, 100));

        gridLayout_4->addWidget(adjuntosListWidget, 2, 1, 4, 1);

        cuerpoTextEdit = new QTextEdit(frame_3);
        cuerpoTextEdit->setObjectName(QString::fromUtf8("cuerpoTextEdit"));

        gridLayout_4->addWidget(cuerpoTextEdit, 1, 1, 1, 2);

        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 5, 0, 1, 1);

        agregarToolButton = new QToolButton(frame_3);
        agregarToolButton->setObjectName(QString::fromUtf8("agregarToolButton"));
        sizePolicy.setHeightForWidth(agregarToolButton->sizePolicy().hasHeightForWidth());
        agregarToolButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        agregarToolButton->setIcon(icon1);

        gridLayout_4->addWidget(agregarToolButton, 2, 2, 1, 1);


        gridLayout->addWidget(frame_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        enviarPushButton = new QPushButton(centralwidget);
        enviarPushButton->setObjectName(QString::fromUtf8("enviarPushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/mail-send.png"), QSize(), QIcon::Normal, QIcon::Off);
        enviarPushButton->setIcon(icon2);

        horizontalLayout->addWidget(enviarPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closePushButton = new QPushButton(centralwidget);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/log-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        closePushButton->setIcon(icon3);

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(1);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 3, 0, 1, 1);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 4, 0, 1, 1);

        deNombreLineEdit = new QLineEdit(frame_2);
        deNombreLineEdit->setObjectName(QString::fromUtf8("deNombreLineEdit"));
        deNombreLineEdit->setClearButtonEnabled(false);

        gridLayout_3->addWidget(deNombreLineEdit, 0, 1, 1, 2);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 0, 3, 1, 1);

        deCorreoLineEdit = new QLineEdit(frame_2);
        deCorreoLineEdit->setObjectName(QString::fromUtf8("deCorreoLineEdit"));

        gridLayout_3->addWidget(deCorreoLineEdit, 0, 4, 1, 1);

        paraLineEdit = new QLineEdit(frame_2);
        paraLineEdit->setObjectName(QString::fromUtf8("paraLineEdit"));

        gridLayout_3->addWidget(paraLineEdit, 3, 1, 1, 4);

        asuntoLineEdit = new QLineEdit(frame_2);
        asuntoLineEdit->setObjectName(QString::fromUtf8("asuntoLineEdit"));

        gridLayout_3->addWidget(asuntoLineEdit, 4, 1, 1, 4);

        line = new QFrame(frame_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 0, 1, 5);


        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(closePushButton, servidorLineEdit);
        QWidget::setTabOrder(servidorLineEdit, puertoSpinBox);
        QWidget::setTabOrder(puertoSpinBox, seguridadComboBox);
        QWidget::setTabOrder(seguridadComboBox, autenticacionComboBox);
        QWidget::setTabOrder(autenticacionComboBox, usuarioLineEdit);
        QWidget::setTabOrder(usuarioLineEdit, claveLineEdit);
        QWidget::setTabOrder(claveLineEdit, deNombreLineEdit);
        QWidget::setTabOrder(deNombreLineEdit, paraLineEdit);
        QWidget::setTabOrder(paraLineEdit, asuntoLineEdit);
        QWidget::setTabOrder(asuntoLineEdit, cuerpoTextEdit);
        QWidget::setTabOrder(cuerpoTextEdit, adjuntosListWidget);
        QWidget::setTabOrder(adjuntosListWidget, agregarToolButton);
        QWidget::setTabOrder(agregarToolButton, quitarToolButton);
        QWidget::setTabOrder(quitarToolButton, enviarPushButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", " Opciones", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Servidor SMTP", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Puerto", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", " Seguridad y autenticaci\303\263n", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Seguridad de la conexi\303\263n", nullptr));
        seguridadComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Ninguna", nullptr));
        seguridadComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "SSL/TLS", nullptr));
        seguridadComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "STARTTLS", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Metodo de autenticaci\303\263n", nullptr));
        autenticacionComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Sin autenticaci\303\263n", nullptr));
        autenticacionComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Contrase\303\261a normal", nullptr));

        label_16->setText(QCoreApplication::translate("MainWindow", " Usuario", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ususario", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Contase\303\261a", nullptr));
        quitarToolButton->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "Cuerpo", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Adjunto", nullptr));
        agregarToolButton->setText(QString());
        enviarPushButton->setText(QCoreApplication::translate("MainWindow", "Enviar Correo", nullptr));
        closePushButton->setText(QCoreApplication::translate("MainWindow", "Cerrar", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Para:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Asunto", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "De:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "E-Mail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
