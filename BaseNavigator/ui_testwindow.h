/********************************************************************************
** Form generated from reading UI file 'testwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWINDOW_H
#define UI_TESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWindow
{
public:

    void setupUi(QWidget *TestWindow)
    {
        if (TestWindow->objectName().isEmpty())
            TestWindow->setObjectName(QString::fromUtf8("TestWindow"));
        TestWindow->resize(800, 600);
        TestWindow->setContextMenuPolicy(Qt::NoContextMenu);
        TestWindow->setStyleSheet(QString::fromUtf8("#Widget { background-image: url(:/img/Resource/Wallpaper-Green-Mountain-Illustration-Gameboy-Vintage-P322048x1152.jpg); }\n"
""));

        retranslateUi(TestWindow);

        QMetaObject::connectSlotsByName(TestWindow);
    } // setupUi

    void retranslateUi(QWidget *TestWindow)
    {
        TestWindow->setWindowTitle(QCoreApplication::translate("TestWindow", "TestWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestWindow: public Ui_TestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWINDOW_H
