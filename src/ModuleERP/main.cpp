#include "m_wavtorization.h"
#include "m_wmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    m_wAvtorization w;
    w.showMaximized();
    return a.exec();
}
