#ifndef TASK_H
#define TASK_H
#include "my_stack.h"
#include "mainwindow.h"
//#include ""
#include <QTime>

class task
{
public:
    task(Ui::MainWindow* _ui,MainWindow *_parent);
    ~task();
    void on_pushButton_clicked();
    void on_create_clicked();
    void Add();
    void on_delete_2_clicked();
    void on_search_clicked();
    void on_draw_clicked();
    void on_task_clicked();

    my_stack<QString>* hash;
private:
    Ui::MainWindow* ui;
    MainWindow *parent;

};

#endif // TASK_H
