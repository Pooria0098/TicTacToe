#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication *app = new QApplication(argc, argv);
    MainWindow *w = new MainWindow;
    w->show();
    return app->exec();
}

