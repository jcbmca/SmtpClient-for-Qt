/********************************************************************************
** Form generated from reading UI file 'sendemail.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDEMAIL_H
#define UI_SENDEMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendEmail
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *host;
    QLabel *label_2;
    QSpinBox *port;
    QCheckBox *ssl;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QCheckBox *auth;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *username;
    QLabel *label_6;
    QLineEdit *password;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLineEdit *sender;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *recipients;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *subject;
    QTextEdit *texteditor;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QPushButton *addAttachment;
    QListWidget *attachments;
    QPushButton *sendEmail;

    void setupUi(QWidget *SendEmail)
    {
        if (SendEmail->objectName().isEmpty())
            SendEmail->setObjectName(QString::fromUtf8("SendEmail"));
        SendEmail->resize(710, 556);
        layoutWidget = new QWidget(SendEmail);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 12, 694, 534));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(87, 17));
        label->setMaximumSize(QSize(87, 17));

        horizontalLayout->addWidget(label);

        host = new QLineEdit(layoutWidget);
        host->setObjectName(QString::fromUtf8("host"));

        horizontalLayout->addWidget(host);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(34, 17));
        label_2->setMaximumSize(QSize(34, 17));

        horizontalLayout->addWidget(label_2);

        port = new QSpinBox(layoutWidget);
        port->setObjectName(QString::fromUtf8("port"));
        port->setMaximum(99999);

        horizontalLayout->addWidget(port);

        ssl = new QCheckBox(layoutWidget);
        ssl->setObjectName(QString::fromUtf8("ssl"));

        horizontalLayout->addWidget(ssl);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        auth = new QCheckBox(layoutWidget);
        auth->setObjectName(QString::fromUtf8("auth"));
        auth->setMinimumSize(QSize(21, 21));
        auth->setMaximumSize(QSize(21, 21));
        auth->setTristate(false);

        horizontalLayout_3->addWidget(auth);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        username = new QLineEdit(layoutWidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(211, 27));
        username->setMaximumSize(QSize(211, 27));

        horizontalLayout_4->addWidget(username);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(password);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);

        verticalLayout_2->addWidget(label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(81, 0));
        label_8->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_2->addWidget(label_8);

        sender = new QLineEdit(layoutWidget);
        sender->setObjectName(QString::fromUtf8("sender"));

        horizontalLayout_2->addWidget(sender);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(81, 0));
        label_9->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_5->addWidget(label_9);

        recipients = new QLineEdit(layoutWidget);
        recipients->setObjectName(QString::fromUtf8("recipients"));

        horizontalLayout_5->addWidget(recipients);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(81, 0));
        label_10->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_7->addWidget(label_10);

        subject = new QLineEdit(layoutWidget);
        subject->setObjectName(QString::fromUtf8("subject"));

        horizontalLayout_7->addWidget(subject);


        verticalLayout_2->addLayout(horizontalLayout_7);

        texteditor = new QTextEdit(layoutWidget);
        texteditor->setObjectName(QString::fromUtf8("texteditor"));
        texteditor->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(texteditor);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        addAttachment = new QPushButton(layoutWidget);
        addAttachment->setObjectName(QString::fromUtf8("addAttachment"));
        addAttachment->setMinimumSize(QSize(97, 0));
        addAttachment->setMaximumSize(QSize(97, 16777215));

        horizontalLayout_8->addWidget(addAttachment);


        verticalLayout->addLayout(horizontalLayout_8);

        attachments = new QListWidget(layoutWidget);
        attachments->setObjectName(QString::fromUtf8("attachments"));
        attachments->setMaximumSize(QSize(16777215, 64));

        verticalLayout->addWidget(attachments);


        verticalLayout_2->addLayout(verticalLayout);

        sendEmail = new QPushButton(layoutWidget);
        sendEmail->setObjectName(QString::fromUtf8("sendEmail"));

        verticalLayout_2->addWidget(sendEmail);


        retranslateUi(SendEmail);

        QMetaObject::connectSlotsByName(SendEmail);
    } // setupUi

    void retranslateUi(QWidget *SendEmail)
    {
        SendEmail->setWindowTitle(QCoreApplication::translate("SendEmail", "Form", nullptr));
        label->setText(QCoreApplication::translate("SendEmail", "SMTP server:", nullptr));
        label_2->setText(QCoreApplication::translate("SendEmail", "Port:", nullptr));
        ssl->setText(QCoreApplication::translate("SendEmail", "SSL", nullptr));
        label_4->setText(QCoreApplication::translate("SendEmail", "Use authentication", nullptr));
        auth->setText(QString());
        label_5->setText(QCoreApplication::translate("SendEmail", "Username:", nullptr));
        label_6->setText(QCoreApplication::translate("SendEmail", "Password:", nullptr));
        label_7->setText(QCoreApplication::translate("SendEmail", "Mime E-mail", nullptr));
        label_8->setText(QCoreApplication::translate("SendEmail", "Sender:", nullptr));
        label_9->setText(QCoreApplication::translate("SendEmail", "Recipients:", nullptr));
        label_10->setText(QCoreApplication::translate("SendEmail", "Subject:", nullptr));
        label_3->setText(QCoreApplication::translate("SendEmail", "Attachments:", nullptr));
        addAttachment->setText(QCoreApplication::translate("SendEmail", "Add File", nullptr));
        sendEmail->setText(QCoreApplication::translate("SendEmail", "Send Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendEmail: public Ui_SendEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDEMAIL_H
