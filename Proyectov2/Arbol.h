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
  void buscarNodo();

private:
  void insertarRaiz( int );
  void insertarHijo( int, Nodo *, bool );

  Nodo *getNodo( int, Nodo * );

  void muestreoRecursivo(Nodo *);

  void encabezadoArbol();
  void encabezadoArbolIndividual();

  void mostrarDatos(Nodo *);
  void mostrarDatosIndividual(Nodo *);

  Nodo *raiz;
};

#endif // ARBOL_H


