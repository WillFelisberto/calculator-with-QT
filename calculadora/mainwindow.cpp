        #include "mainwindow.h"
    #include "ui_mainwindow.h"
    #include <math.h>

    MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
    {
        ui->setupUi(this);
        setWindowTitle("Calculadora");
        ui->Result->setText("0,0");




    }

    MainWindow::~MainWindow()
    {
        delete ui;
    }



    void MainWindow::on_Sum_clicked()
    {
     ui-> Result->setAutoFillBackground(false);
     ui-> Result->setText( QString::number( ui->n1->value() + ui->n2->value()) );
    }
    void MainWindow::on_Subtraction_clicked()
    {
     ui-> Result->setAutoFillBackground(false);
     ui-> Result->setText( QString::number( ui->n1->value() - ui->n2->value()) );
    }
    void MainWindow::on_Multiplication_clicked()
    {
     ui-> Result->setAutoFillBackground(false);
     ui-> Result->setText( QString::number( ui->n1->value() * ui->n2->value()) );
    }
    void MainWindow::on_Division_clicked()
    {
     if (ui->n2->value() != 0)
     {
     ui-> Result->setAutoFillBackground(false);
     ui-> Result->setText( QString::number( ui->n1->value() / ui->n2->value()) );
     }
     else
     {
     QPalette sample_palette;
     sample_palette.setColor(QPalette::Window, Qt::red);
     ui-> Result->setAutoFillBackground(true);
     ui-> Result->setPalette(sample_palette);
     ui-> Result->setText("Divisão por O!");
     }
    }

    void MainWindow::on_limpar_clicked()
    {
          ui->Result->setText("0,0");
    }

    void MainWindow::on_pushButton_clicked()
    {
        ui-> Result->setAutoFillBackground(false);
        ui-> Result->setText( QString::number( pow(ui->n1->value(), ui->n2->value())) );
    }


