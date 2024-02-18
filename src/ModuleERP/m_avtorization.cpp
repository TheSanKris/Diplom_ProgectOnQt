#include "m_avtorization.h"
#include "ui_m_avtorization.h"

m_Avtorization::m_Avtorization(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::m_Avtorization)
{
    ui->setupUi(this);
}

m_Avtorization::~m_Avtorization()
{
    delete ui;
}

