#ifndef MY_STACK_H
#define MY_STACK_H
//#include <mainwindow.h>
#include <cstddef>
template <typename T>


class my_stack
{
public:
//    my_stack(MainWindow *Parent)
//    {
//        parent = Parent;
//    }

    my_stack(/*MainWindow *Parent = nullptr*/){
//        parent = Parent;
    };
    struct node{
        int key;
        T _info;
        node *next;
        node(int k,T i){
            key = k;
           _info = i;
           next = NULL;
        }

    };


    int Hash(int key) {
     //improved reduced  collisions
    int s = 0;
    while(key){
        s+=key%10;
        s = (s*23) % size_of_table;
        key= key/10;
    }
    return  s % size_of_table;
    }

    T Exists(int kk){
        node *Q = heads[Hash(kk)];
        while (Q!=NULL) {
            if(Q->key == kk){return Q->_info;}
            Q=Q->next;
        }
        throw  -1;
    }
    void push(int kk,T s){
//        count++;
        try {
            Exists(kk);
        } catch (int) {
            node *Current = new node(kk,s);
            Current->next = heads[Hash(kk)];
            heads[Hash(kk)]=Current;
            return ;
        }

            throw -1;

//        Current->next=head;
    }


    void Delete(int kk){
//        count--;
        node *Q = heads[Hash(kk)];
        if(Q==NULL) throw -1;
        if (Q->key == kk){
            heads[Hash(kk)] = Q->next;
        }else{
            while (Q->next != NULL) {
                if(Q->next->key == kk){
                    Q->next=Q->next->next;
                    return;
                }
                Q=Q->next;
            }
        }

//        delete head;
//        return res;
    };
//    T top(){
//        return head->get_el();
//    };

//    int get_count(){
//        return count;
//    }

    my_stack *next = nullptr;
    int size_of_table;
     node* heads[100000] = {NULL};

private:

    int count = 0;
//    node *head;


  //  MainWindow *parent;
};

#endif // MY_STACK_H
