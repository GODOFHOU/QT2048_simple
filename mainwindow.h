#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void shuchu();
    void start();
    void suiji();
    void up();
    void down();
    void left();
    void right();
    bool ifwin();
    bool ifover();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    virtual void keyPressEvent(QKeyEvent *et);
    int a[4][4];
};

#endif // MAINWINDOW_H
