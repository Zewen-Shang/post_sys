/********************************************************************************
** Form generated from reading UI file 'sub_mananger_main.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUB_MANANGER_MAIN_H
#define UI_SUB_MANANGER_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sub_Mananger_Main
{
public:
    QWidget *centralwidget;
    QFrame *map_frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *package_add_row;
    QPushButton *package_submit;
    QTableView *package_table_view;
    QVBoxLayout *verticalLayout_2;
    QPushButton *clever_point;
    QPushButton *agree;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sub_Mananger_Main)
    {
        if (Sub_Mananger_Main->objectName().isEmpty())
            Sub_Mananger_Main->setObjectName(QStringLiteral("Sub_Mananger_Main"));
        Sub_Mananger_Main->resize(800, 680);
        centralwidget = new QWidget(Sub_Mananger_Main);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        map_frame = new QFrame(centralwidget);
        map_frame->setObjectName(QStringLiteral("map_frame"));
        map_frame->setGeometry(QRect(140, 0, 500, 381));
        map_frame->setStyleSheet(QStringLiteral("image: url(:/map_bg.png);"));
        map_frame->setFrameShape(QFrame::StyledPanel);
        map_frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 400, 761, 231));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(horizontalLayoutWidget);
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

        package_add_row = new QPushButton(horizontalLayoutWidget);
        package_add_row->setObjectName(QStringLiteral("package_add_row"));

        horizontalLayout->addWidget(package_add_row);

        package_submit = new QPushButton(horizontalLayoutWidget);
        package_submit->setObjectName(QStringLiteral("package_submit"));

        horizontalLayout->addWidget(package_submit);


        verticalLayout->addLayout(horizontalLayout);

        package_table_view = new QTableView(horizontalLayoutWidget);
        package_table_view->setObjectName(QStringLiteral("package_table_view"));

        verticalLayout->addWidget(package_table_view);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        clever_point = new QPushButton(horizontalLayoutWidget);
        clever_point->setObjectName(QStringLiteral("clever_point"));

        verticalLayout_2->addWidget(clever_point);

        agree = new QPushButton(horizontalLayoutWidget);
        agree->setObjectName(QStringLiteral("agree"));
        agree->setEnabled(false);

        verticalLayout_2->addWidget(agree);

        textBrowser = new QTextBrowser(horizontalLayoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        horizontalLayout_2->addLayout(verticalLayout_2);

        Sub_Mananger_Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Sub_Mananger_Main);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Sub_Mananger_Main->setMenuBar(menubar);
        statusbar = new QStatusBar(Sub_Mananger_Main);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Sub_Mananger_Main->setStatusBar(statusbar);

        retranslateUi(Sub_Mananger_Main);

        QMetaObject::connectSlotsByName(Sub_Mananger_Main);
    } // setupUi

    void retranslateUi(QMainWindow *Sub_Mananger_Main)
    {
        Sub_Mananger_Main->setWindowTitle(QApplication::translate("Sub_Mananger_Main", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("Sub_Mananger_Main", "\345\214\205\350\243\271\345\210\227\350\241\250", Q_NULLPTR));
        package_add_row->setText(QApplication::translate("Sub_Mananger_Main", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
        package_submit->setText(QApplication::translate("Sub_Mananger_Main", "\346\217\220\344\272\244", Q_NULLPTR));
        clever_point->setText(QApplication::translate("Sub_Mananger_Main", "\346\231\272\350\203\275\346\217\220\347\244\272", Q_NULLPTR));
        agree->setText(QApplication::translate("Sub_Mananger_Main", "\345\220\214\346\204\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Sub_Mananger_Main: public Ui_Sub_Mananger_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUB_MANANGER_MAIN_H
