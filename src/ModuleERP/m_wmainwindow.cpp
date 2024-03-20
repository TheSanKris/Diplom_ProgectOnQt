#include "m_wmainwindow.h"
#include "ui_m_wmainwindow.h"

m_wMainWindow::m_wMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::m_wMainWindow)
{
    ui->setupUi(this);
}

m_wMainWindow::~m_wMainWindow()
{
    delete ui;
}
