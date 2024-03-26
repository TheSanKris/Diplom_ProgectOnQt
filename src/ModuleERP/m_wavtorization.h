#ifndef M_WAVTORIZATION_H
#define M_WAVTORIZATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class m_wAvtorization; }
QT_END_NAMESPACE

class m_wAvtorization : public QMainWindow
{
    Q_OBJECT

public:
    m_wAvtorization(QWidget *parent = nullptr);
    ~m_wAvtorization();

private slots:
    void on_buttonLogin_clicked();

private:
    Ui::m_wAvtorization *ui;
};
#endif // M_WAVTORIZATION_H
