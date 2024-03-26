#include "m_wavtorization.h"
#include "m_wmainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QFile* m_fStyle = new QFile();
    m_fStyle->setFileName(":/styles/styles/style.css");
    m_fStyle->open(QFile::ReadOnly);
    QString qssStr = m_fStyle->readAll();

    QApplication a(argc, argv);

    a.setStyleSheet(qssStr);

    m_wAvtorization w;
    w.showMaximized();
    return a.exec();
}
