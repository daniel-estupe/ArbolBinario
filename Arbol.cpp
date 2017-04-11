#include "Arbol.h"
#define LONGITUD 16
using namespace std;

/* Métodos Publicos */

Arbol::Arbol()
{
  raiz = NULL;
  actual = NULL;
}

void Arbol::agregarNodo()
{
  int valor;
  cout << "Ingrese el valor del nodo: ";
  cin >> valor;
  insertarValor(valor);
  cout << endl << raiz << endl << actual << endl;

  cout << endl << "Proceso exitoso..."; getch();
}

void Arbol::mostrarPorWhile()
{
  Nodo *nodo = raiz;

  encabezadoArbol();
  while(nodo != NULL)
  {
   mostrarDatos(nodo);
   nodo = nodo->siguiente;
  }
  cout << endl << "Presione cualquier tecla para continuar..."; getch();
}

void Arbol::mostrarPorRecursion()
{

}

/* Métodos Privados */

void Arbol::insertarValor(int valor)
{
  Nodo *nuevo_nodo = NULL;

  if(raiz == NULL)
  {
    nuevo_nodo = new Nodo(valor, NULL);
    raiz = nuevo_nodo;
  }
  else
  {
    nuevo_nodo = new Nodo(valor, actual);
    actual->siguiente = nuevo_nodo;
  }
  actual = nuevo_nodo;
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
       << setw(LONGITUD) << left << nodo->valor
       << setw(LONGITUD) << left << nodo->siguiente << endl;
}


