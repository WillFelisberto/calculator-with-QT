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

private slots:
    void on_Sum_clicked();

    void on_Subtraction_clicked();

    void on_Multiplication_clicked();

    void on_Division_clicked();

    void on_limpar_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_Fatoracao_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
