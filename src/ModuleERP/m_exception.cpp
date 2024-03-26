#include "m_exception.h"

#include "QDialog"

m_Exception::m_Exception()
{

}

m_Exception::m_Exception(QString label) : Label(label)
{
    ShowMessage();
}

m_Exception::m_Exception(qint8 number, QString label) : Code(number), Label(label)
{
    ShowMessage();
}

m_Exception::m_Exception(QString label, QString description) : Label(label), Description(description)
{
    ShowMessage();
}

m_Exception::m_Exception(qint8 number, QString label, QString description) : Code(number), Label(label), Description(description)
{
    ShowMessage();
}

m_Exception::~m_Exception()
{
    //delete message;
}

void m_Exception::ShowMessage()
{
    QMessageBox* message = new QMessageBox();
    message->setObjectName("Exception");

    message->setWindowTitle(" ");
    message->setText(Label);
    message->setInformativeText(Description);
    //message->setDetailedText(Description);

    message->show();
}
