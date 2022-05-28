#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), ui->label,SLOT(clear()));
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(randnum()));
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

void MainWindow::randnum(){
    ui->label->setText(QString::number(rand()%100));
}

