/********************************************************************************
** Form generated from reading UI file 'qdlglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDLGLOGIN_H
#define UI_QDLGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QDlgLogin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *user_type_selector;
    QRadioButton *courier;
    QRadioButton *sys_mananger;
    QRadioButton *sub_mananger;
    QHBoxLayout *horizontalLayout;
    QLineEdit *id;
    QLineEdit *password;
    QPushButton *login;

    void setupUi(QDialog *QDlgLogin)
    {
        if (QDlgLogin->objectName().isEmpty())
            QDlgLogin->setObjectName(QStringLiteral("QDlgLogin"));
        QDlgLogin->resize(400, 366);
        verticalLayout = new QVBoxLayout(QDlgLogin);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(QDlgLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/init_bg.png")));

        verticalLayout->addWidget(label);

        user_type_selector = new QHBoxLayout();
        user_type_selector->setObjectName(QStringLiteral("user_type_selector"));
        courier = new QRadioButton(QDlgLogin);
        courier->setObjectName(QStringLiteral("courier"));
        courier->setChecked(true);

        user_type_selector->addWidget(courier);

        sys_mananger = new QRadioButton(QDlgLogin);
        sys_mananger->setObjectName(QStringLiteral("sys_mananger"));

        user_type_selector->addWidget(sys_mananger);

        sub_mananger = new QRadioButton(QDlgLogin);
        sub_mananger->setObjectName(QStringLiteral("sub_mananger"));

        user_type_selector->addWidget(sub_mananger);


        verticalLayout->addLayout(user_type_selector);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        id = new QLineEdit(QDlgLogin);
        id->setObjectName(QStringLiteral("id"));

        horizontalLayout->addWidget(id);

        password = new QLineEdit(QDlgLogin);
        password->setObjectName(QStringLiteral("password"));

        horizontalLayout->addWidget(password);

        login = new QPushButton(QDlgLogin);
        login->setObjectName(QStringLiteral("login"));

        horizontalLayout->addWidget(login);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QDlgLogin);

        QMetaObject::connectSlotsByName(QDlgLogin);
    } // setupUi

    void retranslateUi(QDialog *QDlgLogin)
    {
        QDlgLogin->setWindowTitle(QApplication::translate("QDlgLogin", "Dialog", Q_NULLPTR));
        label->setText(QString());
        courier->setText(QApplication::translate("QDlgLogin", "1.\345\277\253\351\200\222\345\221\230", Q_NULLPTR));
        sys_mananger->setText(QApplication::translate("QDlgLogin", "2.\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        sub_mananger->setText(QApplication::translate("QDlgLogin", "3.\345\210\206\345\272\227\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        id->setPlaceholderText(QApplication::translate("QDlgLogin", "\350\264\246\345\217\267", Q_NULLPTR));
        password->setPlaceholderText(QApplication::translate("QDlgLogin", "\345\257\206\347\240\201", Q_NULLPTR));
        login->setText(QApplication::translate("QDlgLogin", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QDlgLogin: public Ui_QDlgLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDLGLOGIN_H
