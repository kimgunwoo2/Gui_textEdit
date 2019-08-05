/********************************************************************************
** Form generated from reading UI file 'qt5gui.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT5GUI_H
#define UI_QT5GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt5GUIClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt5GUIClass)
    {
        if (Qt5GUIClass->objectName().isEmpty())
            Qt5GUIClass->setObjectName(QStringLiteral("Qt5GUIClass"));
        Qt5GUIClass->resize(667, 392);
        centralWidget = new QWidget(Qt5GUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setMaximumSize(QSize(100, 50));

        gridLayout_2->addWidget(radioButton_2, 1, 3, 1, 1);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setMaximumSize(QSize(100, 50));

        gridLayout_2->addWidget(radioButton, 1, 2, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(50, 30));

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 4);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(100, 50));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setMinimumSize(QSize(0, 23));
        pushButton_2->setMaximumSize(QSize(100, 20));
        pushButton_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(textEdit, 2, 0, 1, 4);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        Qt5GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qt5GUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 667, 21));
        Qt5GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt5GUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qt5GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qt5GUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qt5GUIClass->setStatusBar(statusBar);

        retranslateUi(Qt5GUIClass);

        QMetaObject::connectSlotsByName(Qt5GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt5GUIClass)
    {
        Qt5GUIClass->setWindowTitle(QApplication::translate("Qt5GUIClass", "Qt5GUI", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Qt5GUIClass", "TextEdit", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Qt5GUIClass", "LineEdit", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Qt5GUIClass", "\354\266\224\352\260\200\355\225\230\352\270\260", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Qt5GUIClass", "\354\202\255\354\240\234\355\225\230\352\270\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Qt5GUIClass: public Ui_Qt5GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT5GUI_H
