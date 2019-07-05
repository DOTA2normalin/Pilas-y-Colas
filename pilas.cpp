// https://blog.martincruz.me/2012/10/Pilas-en-c.html
// https://www.youtube.com/watch?v=is0WqRwmLfA

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
    Pila(){
        head=NULL;
    }
    ~Pila()
    {
        while(head)
        {
            Pop();
        }
    }

    void Push(T);
    T Pop() 
    {
        Nodo<T> *temp=head;
        Nodo<T> *temp2;
        T v;
        if(!head)
            return 0;
        if(temp!=NULL){
            temp2=temp;
        }
        v=temp2->dato;
        head=head->next;
        delete temp2;
        return v;
    }
    void mostrar()
    {
        Nodo<T> *temp = head;
    
        while(temp!=NULL)
        {   
            cout<<temp->dato<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};

template<typename T>
void Pila<T>::Push(T v)
{
    Nodo<T> *nuevo= new Nodo<T>(v);
    /* Ahora, el comienzo de nuestra Pila es en nuevo nodo */
    nuevo->dato=v;
    if(head==NULL)
    {
        nuevo->next=NULL;
    }
    else{
        Nodo<T> *temp;
        temp=head;
        nuevo->next=temp;
    
    }

    head = nuevo;
}
int main()
{
    Pila<int>  pila;
    pila.Push(8);
    pila.Push(7);
    pila.Push(5);
    pila.Push(3);
    pila.Push(1);
    pila.mostrar();
    pila.Pop();
    cout<<endl;
    pila.mostrar();
    return 0;
}
