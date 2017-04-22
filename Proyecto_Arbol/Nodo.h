#include <iostream>

#ifndef NODO_H
#define NODO_H

class Nodo {
   public:
    Nodo(int valor = 0, Nodo *padre = NULL)
    {
     this->valor = valor;
     this->padre = padre;
     this->derecha = NULL;
     this->izquierda = NULL;
    }

    void setPadre(Nodo *padre)
    {
      this->padre = padre;
    }

    void setDerecha(Nodo *derecha)
    {
      this->derecha = derecha;
    }

    void setIzquierda(Nodo *izquierda)
    {
      this->izquierda = izquierda;
    }

    void setValor(int valor)
    {
      this->valor = valor;
    }

    Nodo *getPadre()
    {
      if(padre != NULL)
        return padre;
      else
        return NULL;
    }

    Nodo *getDerecha()
    {
      return derecha;
    }

    Nodo *getIzquierda()
    {
      return izquierda;
    }

    int getValor()
    {
      return valor;
    }

    bool isPadre()
    {
      if(derecha != NULL || izquierda != NULL)
        return true;
      else
        return false;
    }
  private:
    Nodo *padre;
    Nodo *derecha;
    Nodo *izquierda;
    int valor;
};
#endif // NODO_H

