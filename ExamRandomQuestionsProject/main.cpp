#include "mainwindow.h"

#include <QApplication>
#include "egzamin.cpp"
#include "pytanie.cpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("EGZAMINATOR300");
    w.setWindowIcon(QIcon("release/EGZAMINATOR3000.png"));
    w.show();
    return a.exec();

}
