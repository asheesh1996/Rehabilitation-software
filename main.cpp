#include "jrdgui.h"
#include <QApplication>
#include "game.h"

Game * game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JrdGui w;
    w.show();

    return a.exec();
}
