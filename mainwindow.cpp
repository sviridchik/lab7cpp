#include "mainwindow.h"
#include "my_stack.h"
//#include "ui_mainwindow.h"
#include <QTime>
#include "task.h"


task* t;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTime now = QTime::currentTime();
    srand(now.msec());
    t = new task(ui,this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    t->on_pushButton_clicked();
//    my_stack<QString>* hash = new my_stack<QString>();
//        hash->m = ui->size_input->text().toInt();
}

void MainWindow::on_create_clicked()
{
    t->on_create_clicked();
//    for (int i =0; i<20; i++){

//    }
}

void MainWindow::on_pushButton_2_clicked()
{
    t->Add();
}

void MainWindow::on_delete_2_clicked()
{
    t->on_delete_2_clicked();
}

void MainWindow::on_search_clicked()
{
    t -> on_search_clicked();
//    try{
//        int kk = ui->key->text().toInt();
//            hash->Find(kk);
//        }catch(int)
//        {
//            QMessageBox::critical(parent," ","Error");
//        }
}

void MainWindow::on_draw_clicked()
{
    ui->beauty->clear();
   t->on_draw_clicked();
}

void MainWindow::on_task_clicked()
{
    t->on_task_clicked();
}
