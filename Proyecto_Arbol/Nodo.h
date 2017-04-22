#include <iostream>
#include <string.h>

#ifndef NODO_H
#define NODO_H

using std::string;

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

    bool esPadre()
    {
      if(this->derecha != NULL || this->izquierda != NULL)
        return true;
      else
        return false;
    }

    bool getDireccion()
    {
      /* true es derecha y false es izquierda */
      if(this->padre->derecha == this)
        return true;
      else
        return false;
    }

     string obtenerIdentidad()
     {
        if(this->getPadre() == NULL)
          return "Raiz";
        else if(this->esPadre() == true)
          return "Padre";
        else
          return "Hoja";
     }

  private:
    Nodo *padre;
    Nodo *derecha;
    Nodo *izquierda;
    int valor;
};
#endif // NODO_H

