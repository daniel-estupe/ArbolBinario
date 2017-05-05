#include "Nodo.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>

#ifndef ARBOL_H
#define ARBOL_H

class Arbol
{
public:
  Arbol();
  void agregarNodo();
  void mostrarPorWhile();
  void mostrarPorRecursion();
  void recorrerArbol();
  void buscarNodo();
  void eliminarNodo();

private:
  void insertarRaiz( int );
  void insertarHijo( int, Nodo *, bool );

  Nodo *getNodo( int, Nodo * );

  void muestreoRecursivo(Nodo *);

  void mostrarPreorden(Nodo *);
  void mostrarEnorden(Nodo *);
  void mostrarPostorden(Nodo *);

  void encabezadoArbol();
  void encabezadoArbolIndividual();

  void mostrarDatos(Nodo *);
  void mostrarDatosIndividual(Nodo *);

  void elimina(Nodo *);

  Nodo *raiz;
};

#endif // ARBOL_H

