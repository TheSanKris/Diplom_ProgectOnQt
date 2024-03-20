#ifndef M_WMAINWINDOW_H
#define M_WMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class m_wMainWindow;
}

class m_wMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit m_wMainWindow(QWidget *parent = nullptr);
    ~m_wMainWindow();

private:
    Ui::m_wMainWindow *ui;
};

#endif // M_WMAINWINDOW_H
