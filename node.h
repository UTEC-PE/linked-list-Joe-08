#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T data;
    struct Node* next;

    void killSelf(){
    	next->killSelf(); // Esto no está verificando si el siguiente no es null, va a crashear
    	delete this;
    }
    void printReverse(){
    	if (next != NULL)
    		next->printReverse();
    	std::cout<<data;
    }
};

#endif