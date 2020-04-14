#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_create_clicked();

    void on_pushButton_2_clicked();

    void on_delete_2_clicked();

    void on_search_clicked();

    void on_draw_clicked();

    void on_task_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
