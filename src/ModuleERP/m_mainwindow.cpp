#include "m_mainwindow.h"
#include "ui_m_mainwindow.h"

m_MainWindow::m_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::m_MainWindow)
{
    ui->setupUi(this);
}

m_MainWindow::~m_MainWindow()
{
    delete ui;
}
