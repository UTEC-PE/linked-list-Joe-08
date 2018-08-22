#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include "iterator.h"

using namespace std;

template <typename T>
class List {
    private:
        Node<T>* head;
        Node<T>* tail;
        int nodes;

        void print_reverse(Node<T>* head);

    public:
        List(){
            nodes = 0;
            head = NULL;
            tail = NULL;
        }

        T front(){
            return head->data;
        }

        T back(){
            return tail->data;
        }

        void push_front(T value){
            if(head == NULL)
            {
                head = new Node<T>;
                head->data = value;
                head->next = NULL;
                tail = head;
                ++nodes;
            }
            else
            {
                Node<T>* nodo = new Node<T>;
                nodo->data = value;
                nodo->next = head;
                nodo = head;
                ++nodes;
            }
        }

        void push_back(T value){
            if (tail == NULL)
            {
                tail = new Node<T>;
                tail->data = value;
                tail->next = NULL;
                head = tail;
                ++nodes;
            }
            else{
                Node<T>* nodo = new Node<T>;
                nodo->data = value;
                nodo->next = NULL;
                nodo = tail;
                ++nodes;
            }
        }
        
        void pop_front(){
            if (head == NULL)
            {
                ;
            }
            else{
                Node<T>* nodo = new Node<T>;
                nodo->head = value;
                head->next;

            }
        }

        void pop_back(){

        }
        
        T get(int position){

        }

        void concat(List<T> &other){

        }

        bool empty(){

        }

        int size(){

        }

        void print(){
            Node<T> *temp = head;
            if (temp != NULL)
             {
                cout<< temp->data <<endl;
                temp = temp->next
             }
             else{
                cout<<"no hay elementos"<<endl;
             } 
        }

        void print_reverse(){

        }
        
        void clear(){

        }

        Iterator<T> begin(){

        }

        Iterator<T> end(){

        }

        ~List(){

        }
#endif
