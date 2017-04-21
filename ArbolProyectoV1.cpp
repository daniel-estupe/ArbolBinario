#include "Arbol.h"
#define LONGITUD 16
using namespace std;

/* Métodos Publicos */

Arbol::Arbol()
{
  this->raiz = NULL;
  this->actual = NULL;
}

void Arbol::agregarNodo()
{
  int valor;
  cout << "Ingrese el valor del nodo: ";
  cin >> valor;
  insertarValor(valor);
  cout << endl << "Proceso exitoso..."; getch();
}

void Arbol::mostrarPorWhile()
{
  Nodo *nodo = raiz;

  if(raiz == NULL)
  {
    cout << endl << "El arbol no tiene nodos...";
  }

  else
  {
  encabezadoArbol();

  while(nodo != NULL)
  {
   mostrarDatos(nodo);
   nodo = nodo->getSiguiente();
  }

  cout << endl << "Presione cualquier tecla para continuar...";
  }
  getch();
}

void Arbol::mostrarPorRecursion()
{
  if(raiz == NULL)
  {
    cout << endl << "El arbol no tiene nodos...";
  }
  else
  {
  encabezadoArbol();
  muestreoRecursivo(raiz);
  cout << endl << "Presione cualquier tecla para continuar...";
  }
  getch();
}

/* Métodos Privados */

void Arbol::insertarValor(int valor)
{
  Nodo *nuevo = new Nodo(valor, actual);

  if(raiz)
  {
    actual->setSiguiente(nuevo);
    actual = nuevo;
  }
  else
  {
    raiz = nuevo;
    actual = raiz;
  }
}

void Arbol::muestreoRecursivo(Nodo *nodo)
{
  if(nodo)
  {
    mostrarDatos(nodo);
    muestreoRecursivo(nodo->getSiguiente());
  }
  else
    return;
}

void Arbol::encabezadoArbol()
{
  cout << setw(LONGITUD) << left << "Codigo"
       << setw(LONGITUD) << left << "Valor"
       << setw(LONGITUD) << left << "Nodo siguiente"
       << endl;
}

void Arbol::mostrarDatos(Nodo *nodo)
{
  cout << setw(LONGITUD) << left << nodo
       << setw(LONGITUD) << left << nodo->getValor()
       << setw(LONGITUD) << left << nodo->getSiguiente() << endl;
}

