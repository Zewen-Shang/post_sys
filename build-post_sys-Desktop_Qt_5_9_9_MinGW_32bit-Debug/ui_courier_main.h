/********************************************************************************
** Form generated from reading UI file 'courier_main.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURIER_MAIN_H
#define UI_COURIER_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Courier_Main
{
public:
    QAction *action_my_asks;
    QWidget *centralwidget;
    QLabel *label;
    QFrame *map_frame;
    QTableView *tableView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *package_id;
    QLineEdit *time;
    QPushButton *submit;
    QPushButton *weather;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Courier_Main)
    {
        if (Courier_Main->objectName().isEmpty())
            Courier_Main->setObjectName(QStringLiteral("Courier_Main"));
        Courier_Main->resize(518, 678);
        action_my_asks = new QAction(Courier_Main);
        action_my_asks->setObjectName(QStringLiteral("action_my_asks"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        action_my_asks->setFont(font);
        centralwidget = new QWidget(Courier_Main);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 390, 111, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setIndent(-1);
        map_frame = new QFrame(centralwidget);
        map_frame->setObjectName(QStringLiteral("map_frame"));
        map_frame->setGeometry(QRect(9, 9, 500, 381));
        map_frame->setStyleSheet(QStringLiteral("image: url(:/map_bg.png);"));
        map_frame->setFrameShape(QFrame::StyledPanel);
        map_frame->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 430, 491, 151));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 590, 491, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        package_id = new QLineEdit(horizontalLayoutWidget);
        package_id->setObjectName(QStringLiteral("package_id"));

        horizontalLayout->addWidget(package_id);

        time = new QLineEdit(horizontalLayoutWidget);
        time->setObjectName(QStringLiteral("time"));

        horizontalLayout->addWidget(time);

        submit = new QPushButton(horizontalLayoutWidget);
        submit->setObjectName(QStringLiteral("submit"));

        horizontalLayout->addWidget(submit);

        weather = new QPushButton(centralwidget);
        weather->setObjectName(QStringLiteral("weather"));
        weather->setGeometry(QRect(450, 400, 41, 20));
        Courier_Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Courier_Main);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 518, 22));
        Courier_Main->setMenuBar(menubar);
        statusbar = new QStatusBar(Courier_Main);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Courier_Main->setStatusBar(statusbar);

        retranslateUi(Courier_Main);

        QMetaObject::connectSlotsByName(Courier_Main);
    } // setupUi

    void retranslateUi(QMainWindow *Courier_Main)
    {
        Courier_Main->setWindowTitle(QApplication::translate("Courier_Main", "MainWindow", Q_NULLPTR));
        action_my_asks->setText(QApplication::translate("Courier_Main", "my_asks", Q_NULLPTR));
        label->setText(QApplication::translate("Courier_Main", "\346\210\221\347\232\204\344\273\273\345\212\241", Q_NULLPTR));
        package_id->setPlaceholderText(QApplication::translate("Courier_Main", "\345\214\205\350\243\271id", Q_NULLPTR));
        time->setPlaceholderText(QApplication::translate("Courier_Main", "\345\256\214\346\210\220\346\227\266\351\227\264", Q_NULLPTR));
        submit->setText(QApplication::translate("Courier_Main", "\345\256\214\346\210\220", Q_NULLPTR));
        weather->setText(QApplication::translate("Courier_Main", "\345\244\251\346\260\224", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Courier_Main: public Ui_Courier_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURIER_MAIN_H
