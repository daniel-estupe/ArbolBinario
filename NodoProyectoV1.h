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

    void setAnterior(Nodo *anterior)
    {
      this->anterior = anterior;
    }

    void setSiguiente(Nodo *siguiente)
    {
      this->siguiente = siguiente;
    }

    void setValor(int valor)
    {
      this->valor = valor;
    }

    Nodo *getAnterior()
    {
      return anterior;
    }

    Nodo *getSiguiente()
    {
      return siguiente;
    }

    int getValor()
    {
      return valor;
    }

  private:
    Nodo *anterior;
    Nodo *siguiente;
    int valor;
};
#endif // NODO_H
