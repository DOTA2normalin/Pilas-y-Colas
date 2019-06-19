// https://blog.martincruz.me/2012/10/colas-en-c.html
// https://www.youtube.com/watch?v=is0WqRwmLfA

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
template<typename T>
class Cola{
public:   
    Nodo<T> *fin;
    Nodo<T> *frente;
public:
    Cola(){
        fin=NULL;
        frente=NULL;
    }
    ~Cola()
    {
        while(frente)
        {
            eliminar();
        }
    }
    bool cola_vacia(Nodo<T> *frente)
    {

        if(frente==NULL)
            return true;
        return false;
    }
    void insertarCola(Nodo<T> *&,Nodo<T> *&,T);
    void eliminar(Nodo<T> *&,Nodo<T> *&,T);
};

template<typename T>
void Cola<T>::insertarCola(Nodo<T> *&frente,Nodo<T> *&fin,T n)
{
        Nodo<T> *new_nodo=new Cola();
        new_nodo->dato=n;
        new_nodo->next=NULL;
        frente=new_nodo;
        fin=new_nodo;
        if(cola_vacia(frente))
        {
            frente=new_nodo;
        }
        else{
            fin->next=new_nodo;
        }
        fin=new_nodo;
}


template<typename T>
void Cola<T>::eliminar(Nodo<T> *&frente,Nodo<T> *&fin,T n)
{
    n=frente->dato;
    Nodo<T> aux;
    if(frente==NULL){
        frente=NULL;
        fin=NULL;
    }
    else{
        frente=frente->next;
    }
    delete aux;
}
int main()
{
    return 0;
}