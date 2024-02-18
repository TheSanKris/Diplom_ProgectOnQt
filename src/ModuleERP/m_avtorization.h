#ifndef M_AVTORIZATION_H
#define M_AVTORIZATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class m_Avtorization; }
QT_END_NAMESPACE

class m_Avtorization : public QMainWindow
{
    Q_OBJECT

public:
    m_Avtorization(QWidget *parent = nullptr);
    ~m_Avtorization();

private:
    Ui::m_Avtorization *ui;
};
#endif // M_AVTORIZATION_H
