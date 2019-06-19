// https://www.youtube.com/watch?v=YrUjHXxKz2g

// http://www.conclase.net/c/edd/?cap=002d

#include <iostream>
using namespace std;

template<typename T>
class Nodo{
public:
    T dato;
    Nodo<T> *next;
public:
    Nodo<T>(T n)
    {
        dato=n;
        next=NULL;
    }
};

template <typename T>
class Pila
{
    Nodo<T> *head;
public:
    Pila():head(NULL){}
    ~Pila()
    {
        while(head)
        {
            Pop();
        }
    }

    void Push(T v)
    {
        Nodo<T> *nuevo= new Pila();
        /* Ahora, el comienzo de nuestra pila es en nuevo nodo */

        nuevo->dato=v;
        head = nuevo;
    }
    T Pop() 
    {
        Nodo<T> *nodo;
        int v;
        if(!head)
            return 0;
        nodo=head;
        head=nodo->next;
        v=nodo->dato;
        delete nodo;
        return v;
    }
};

int main()
{
    return 0;
}