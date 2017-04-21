#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Arbol.h"

using namespace std;

const char SALIR = '4'; /* de acuerdo al menu */

void estilizar()
{
  system("title Programacion III - Estructura de Nodos v1");
  system("color 3F");
}

void encabezado()
{
  system("cls");
  cout<< endl << "\t\t\t" << "Estructura de arboles"	<< endl << endl;
}

void mostrarMenu(){
  encabezado();
  cout<<"1. Insertar un nodo"<<endl
      <<"2. Listar nodos usando while"<<endl
      <<"3. Listar nodos usando recursividad"<<endl
      <<"4. Salir"<<endl<<endl;
}

char obtenerItem()
{
  char opcion;
  cout << "Ingrese una opcion: ";
  cin>>opcion;
  return opcion;
}

void salir()
{
  cout << endl << "Gracias por tu visita..." << endl << endl; getch();
}

void ejecutar(char op, Arbol *arbol)
{
  encabezado();

  switch(op){
    case '1':
      arbol->agregarNodo(); break;
    case '2':
      arbol->mostrarPorWhile(); break;
    case '3':
      arbol->mostrarPorRecursion(); break;
    case '4':
        salir(); break;
    default:
      cout << endl << "Opcion invalida..."; getch();
  }
}


