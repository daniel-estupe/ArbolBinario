#include <iostream>

#ifndef NODO_H
#define NODO_H

class Nodo {
   public:
    Nodo(int valor, Nodo *anterior = NULL)
    {
     this->valor = valor;
     this->anterior=anterior;
     this->siguiente = NULL;
    }

    Nodo *anterior;
    Nodo *siguiente;
    int valor;
};
#endif // NODO_H
