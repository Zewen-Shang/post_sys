/********************************************************************************
** Form generated from reading UI file 'sys_mananger_main.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_MANANGER_MAIN_H
#define UI_SYS_MANANGER_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sys_Mananger_Main
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *courier_add;
    QPushButton *courier_submit;
    QTableView *courier_table_view;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sub_mananger_add;
    QPushButton *sub_mananger_submit;
    QTableView *sys_mananger_table_view;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sys_Mananger_Main)
    {
        if (Sys_Mananger_Main->objectName().isEmpty())
            Sys_Mananger_Main->setObjectName(QStringLiteral("Sys_Mananger_Main"));
        Sys_Mananger_Main->resize(521, 350);
        centralwidget = new QWidget(Sys_Mananger_Main);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        courier_add = new QPushButton(centralwidget);
        courier_add->setObjectName(QStringLiteral("courier_add"));

        horizontalLayout->addWidget(courier_add);

        courier_submit = new QPushButton(centralwidget);
        courier_submit->setObjectName(QStringLiteral("courier_submit"));

        horizontalLayout->addWidget(courier_submit);


        verticalLayout->addLayout(horizontalLayout);

        courier_table_view = new QTableView(centralwidget);
        courier_table_view->setObjectName(QStringLiteral("courier_table_view"));

        verticalLayout->addWidget(courier_table_view);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(20);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        sub_mananger_add = new QPushButton(centralwidget);
        sub_mananger_add->setObjectName(QStringLiteral("sub_mananger_add"));

        horizontalLayout_2->addWidget(sub_mananger_add);

        sub_mananger_submit = new QPushButton(centralwidget);
        sub_mananger_submit->setObjectName(QStringLiteral("sub_mananger_submit"));

        horizontalLayout_2->addWidget(sub_mananger_submit);


        verticalLayout->addLayout(horizontalLayout_2);

        sys_mananger_table_view = new QTableView(centralwidget);
        sys_mananger_table_view->setObjectName(QStringLiteral("sys_mananger_table_view"));

        verticalLayout->addWidget(sys_mananger_table_view);

        Sys_Mananger_Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Sys_Mananger_Main);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 521, 22));
        Sys_Mananger_Main->setMenuBar(menubar);
        statusbar = new QStatusBar(Sys_Mananger_Main);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Sys_Mananger_Main->setStatusBar(statusbar);

        retranslateUi(Sys_Mananger_Main);

        QMetaObject::connectSlotsByName(Sys_Mananger_Main);
    } // setupUi

    void retranslateUi(QMainWindow *Sys_Mananger_Main)
    {
        Sys_Mananger_Main->setWindowTitle(QApplication::translate("Sys_Mananger_Main", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("Sys_Mananger_Main", "\345\277\253\351\200\222\345\221\230", Q_NULLPTR));
        courier_add->setText(QApplication::translate("Sys_Mananger_Main", "\346\267\273\345\212\240\345\277\253\351\200\222\345\221\230", Q_NULLPTR));
        courier_submit->setText(QApplication::translate("Sys_Mananger_Main", "\346\217\220\344\272\244\344\277\256\346\224\271", Q_NULLPTR));
        label_2->setText(QApplication::translate("Sys_Mananger_Main", "\345\210\206\351\203\250\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        sub_mananger_add->setText(QApplication::translate("Sys_Mananger_Main", "\346\267\273\345\212\240\345\210\206\351\203\250\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        sub_mananger_submit->setText(QApplication::translate("Sys_Mananger_Main", "\346\217\220\344\272\244\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Sys_Mananger_Main: public Ui_Sys_Mananger_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_MANANGER_MAIN_H
