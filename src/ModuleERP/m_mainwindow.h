#ifndef M_MAINWINDOW_H
#define M_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class m_MainWindow;
}

class m_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit m_MainWindow(QWidget *parent = nullptr);
    ~m_MainWindow();

private:
    Ui::m_MainWindow *ui;
};

#endif // M_MAINWINDOW_H
