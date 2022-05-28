#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // связь сигналов и слотов
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), ui->label,SLOT(clear())); // сигнал нажатие кнопки pushButton_2 при нажатии очищает сторку
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(randnum())); // сигнал нажатие кнопки pushButton при нажатии заполняет строку рандомным числом
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::randnum(){     // слот рандомное число
    ui->label->setText(QString::number(rand()%100));
}

