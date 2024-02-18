#include "m_avtorization.h"
#include "m_mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    m_Avtorization w;
    w.show();
    return a.exec();
}
