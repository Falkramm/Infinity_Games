#include "mainwindow.h"
#include "sanke.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Snake window;

      window.setWindowTitle("Snake");
      window.show();
    return a.exec();
}
