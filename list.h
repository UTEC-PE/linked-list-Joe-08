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
            if (!head){
                throw "Lista vacia";
            }
            return head->data;
        }

        T back(){
            if (!tail){
                throw "Lista vacia";
            }
            return tail->data;
        }

        void push_front(T value){
            Node<T>* temp = new Node<T>;
            temp->data = value;
            temp->next = nullptr;
            nodes++;
            if(nodes == 0){
                head = temp;
                tail = temp;
            }
            else{
                temp->next = head;
                head = temp;    
            }
            
        }

        void push_back(T value){
            Node<T>* temp = new Node<T>;
            temp->data = value;
            temp->next = nullptr;
            nodes++;
            if (nodes == 0){
                head = temp;
                tail = temp;
            }
            else{
                tail->next = temp;
                tail = temp;
            }
        }
        
        void pop_front(){
            if (!head)
            {
                throw "Lista vacia";
                return;
            }
            Node<T> *temp = head;
            head = head->next;
            delete temp;
        }

        void pop_back(){
            if (!head)
            {
                throw "Lista vacia";
                return;
            }
            Node<T> *tail2 = tail;
            Node<T> *temp = head;
            for (int i = 0; i < nodes; i++)
            {
                if (temp->next == tail)
                {
                    tail = temp;
                    continue;
                }
                temp = 
            }
        }
        
        T get(int position){
            if (position >= nodes || position < 0){
                throw "Pos..";
            }
            int index = 0;
            Node<T>* temp = head;
            while(temp){
                if (index = position){
                    return temp->data
                }
                temp = temp->next;
                index++;
            }
        }

        void concat(List<T> &other){
            tail->next = other->head;
            nodes += other->nodes; 
        }

        bool empty(){
            return head == NULL;
        }

        int size(){
            return nodes;
        }

        void print(){
            Node<T> *temp = head;
            while(temp)
            {
                cout<< temp->data << endl;
                temp = temp->next;
            }
        }

        void print_reverse(){
            if (!head){
                throw "Lista vacia";
            }
            head->printReverse();
        }
        
        void clear(){
        	head->killSelf();
        }

        Iterator<T> begin(){

        }

        Iterator<T> end(){

        }

        ~List();
#endif
