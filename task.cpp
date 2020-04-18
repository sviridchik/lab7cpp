#include "task.h"
#include <QMessageBox>
int max = -999;
QString max_value;
int answer;
task::task(Ui::MainWindow* _ui,MainWindow *_parent)
{
    ui = _ui;
    parent = _parent;
    QTime now = QTime::currentTime();
    srand(now.msec());
}
task::~task()
{

}

void task::on_pushButton_clicked()
{
    hash = new my_stack<QString>();
    hash->size_of_table = ui->size_input->text().toInt();

    //    hash->size_of_table = ui->size_input->text().toInt();
}
QString data[9] = {"12", "89","78","123","lucky","45","sds","qwerty","zxc"};

void task::on_create_clicked()
{
    //    t->on_create_clicked();
    for (int i =0; i<20; i++){
        try {
//            int kk = rand()%100;

            hash->push(rand()%100,data[rand()%9]);
        } catch (int) {
            i--;
        }
    }
}

void task::Add()
{
    try{
        hash->push(ui->key->text().toInt(),ui->info->text());
    }
    catch(int)
    {
        QMessageBox::critical(parent," ","Error");
    }
}
void task::on_delete_2_clicked()
{
    hash->Delete(ui->key_2->text().toInt());
    //    t->on_delete_2_clicked();
}

void task::on_search_clicked()
{
    //    t -> on_search_clicked();
    try{
        int kk = ui->key_3->text().toInt();
        ui->info_2->setText( hash->Exists(kk));
    }catch(int)
    {
        QMessageBox::critical(parent," ","Error");
    }
}

void task::on_draw_clicked()
{
    //   t->on_draw_clicked();
    QString s = "";
    for (int i = 0;i<hash->size_of_table;i++)
    {
        s+=QString::number(i)+": ";
        my_stack<QString>::node* Q = hash->heads[i];
        while (Q!=NULL)
        {
            if (Q!=hash->heads[i]) s+=" ~~ ";
            if (max<Q->key){
                max = Q->key;
                max_value = Q->_info;
                answer = i;
            }
            s+="(" + QString::number(Q->key) + "," + Q->_info + ") ";
            Q=Q->next;
        }
        s+='\n';
    }
    ui->beauty->setText(s);
}
void task::on_task_clicked()
{
//    t->on_task_clicked();
    ui->key_4->setText(QString::number(max));
    ui->num->setText(QString::number(answer));
    ui->info_3->setText(max_value);

}


//void task::on_delete_all_button_clicked()
//{
//    hash = NULL;
//    ui->gridLayoutWidget_6->hide();
//    ui->textBrowser->clear();
//}

