#ifndef M_EXCEPTION_H
#define M_EXCEPTION_H

#include "QString"
#include "QMessageBox"
#include "QErrorMessage"

class m_Exception
{
public:
    m_Exception();
    //m_Exeption(qint8 number);
    m_Exception(QString label);
    m_Exception(qint8 number, QString label);
    m_Exception(QString label, QString description);
    m_Exception(qint8 number, QString label, QString description);
    ~m_Exception();

private:
    void ShowMessage();
    //void ShowError();
    //void Write();

private:
    qint8 Code;
    QString Label;
    QString Description;
};

#endif // M_EXCEPTION_H
