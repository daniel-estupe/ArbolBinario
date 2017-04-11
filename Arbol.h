#include "Nodo.h"
#include <iostream>
#include <conio.h>
#include <iomanip>

#ifndef ARBOL_H
#define ARBOL_H

class Arbol
{
public:
  Arbol();
  void agregarNodo();
  void mostrarPorWhile();
  void mostrarPorRecursion();
private:
  void insertarValor( int );
  void encabezadoArbol();
  void mostrarDatos(Nodo *);

  Nodo *raiz;
  Nodo *actual;
};

#endif // ARBOL_H
