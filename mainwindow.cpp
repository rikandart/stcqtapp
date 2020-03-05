#include "mainwindow.h"
#include "ui_mainwindow.h"


//tstSignSlt ff;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_9->setVisible(false);
    ui->label_10->setVisible(false);
//    tstSignSlt *ff = new tstSignSlt(this);
//    connect(ui->pushButton, SIGNAL(released()), ff, SLOT(doWork()));
    //connect(ui->pushButton, SIGNAL(clicked(bool)), &ff, SLOT(doWork((void)7)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked(){
    runthrd* rt = new runthrd(ui->progressBar, ui->label);
    rt->start();
    /*if(runthrd::canRun){
        rt->start();
    }*/
}

void MainWindow::on_pushButton_2_clicked()
{
    runthrd* rt = new runthrd(ui->progressBar_2, ui->label_2);
    rt->start();
}

void MainWindow::on_pushButton_3_clicked()
{
    runthrd* rt = new runthrd(ui->progressBar_3, ui->label_3);
    rt->start();
}

void MainWindow::on_pushButton_4_clicked()
{
    runthrd* rt = new runthrd(ui->progressBar_4, ui->label_4);
    rt->start();
}

void MainWindow::on_pushButton_5_clicked()
{
    runthrd* rt = new runthrd(ui->progressBar_5, ui->label_5);
    rt->start();
}

void MainWindow::on_pushButton_6_clicked()
{
    runthrd* rt = new runthrd(ui->progressBar_6, ui->label_6);
    rt->start();
}

void MainWindow::on_pushButton_7_clicked()
{
    runthrd* rt = new runthrd(ui->progressBar_7, ui->label_7);
    rt->start();
}

void MainWindow::on_pushButton_8_clicked()
{
    runthrd* rt = new runthrd(ui->progressBar_8, ui->label_8);
    rt->start();
}

void MainWindow::on_pushButton_9_clicked()
{
    runthrd* rt = new runthrd(ui->progressBar_9, ui->label_9);
    rt->start();
}

void MainWindow::on_pushButton_10_clicked()
{
    runthrd* rt = new runthrd(ui->progressBar_10, ui->label_10);
    rt->start();
}
