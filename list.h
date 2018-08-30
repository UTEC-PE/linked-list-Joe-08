#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"

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
            nodes++; // Si ejecutas esto antes de tu if entonces nodes no va a ser 0, por tanto tu primera condición no va afuncionar
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
            nodes++; // Mismo caso que la función anterior
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
                temp = // Incompleto
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
                    return temp->data // Falta ;
                }
                temp = temp->next;
                index++;
            }
        }

        void concat(List<T> &other){
            tail->next = other->head; // Falta igualar la cola a la cola de la nueva lista y verificar si la lista está vacía
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
        	head->killSelf(); //Y si la lista está vacía? head = tail = nullptr?
        }

        ~List(); // falta el destructor

// }; La lista no se cerró, esto no va a compilar
#endif
