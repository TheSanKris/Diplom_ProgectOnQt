#include "m_wavtorization.h"
#include "ui_m_wavtorization.h"

m_wAvtorization::m_wAvtorization(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::m_wAvtorization)
{
    ui->setupUi(this);
}

m_wAvtorization::~m_wAvtorization()
{
    delete ui;
}

