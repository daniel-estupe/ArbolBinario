#include "Arbol.h"
#define LONGITUD_NODO 12
#define LONGITUD_HIJO 18
using namespace std;

/* Métodos Publicos */

Arbol::Arbol()
{
  this->raiz = NULL;
}

void Arbol::agregarNodo()
{
  int valor_padre = 0; /* valor para buscar el nodo padre al cual ingresarle el hijo*/
  int valor = 0; /* valor del nuevo nodo */
  Nodo *codigo_padre = NULL; /* código del padre al cual se le ingresará una hijo */
  Nodo *codigo_nodo = NULL; /* código que indica la existencia de un nodo del mismo valor que el ingresado */
  bool direccion; /* 0 es izquierda y 1 es derecha */
  bool ocupado; /* indica si la direccion ya está ocupada */

  if(raiz != NULL)
  {
    cout << "Ingrese el valor del nodo padre: ";
    cin >> valor_padre;

    codigo_padre = getNodo(valor_padre, raiz);

    if(codigo_padre != NULL)
    {
      cout << endl << "Direccion Izquierda(0) o Derecha(1): ";
      cin >> direccion;

      ocupado = (codigo_padre->getDerecha() && direccion) || (codigo_padre->getIzquierda() && !direccion);
      if(ocupado)
      {
        cout << endl << "La direccion ya esta ocupada..."; getch();
        return;
      }
    }
    else
    {
      cout << endl << "No se ha encontrado el nodo...";
    }
  }

  cout << endl << "Ingrese el valor ";
      (raiz != NULL) ? cout << "del hijo: " : cout << "de la raiz: ";
  cin >> valor;

  if(raiz != NULL)
  {
    codigo_nodo = getNodo(valor, raiz);
    if(codigo_nodo)
      cout << endl << "Ya existe un nodo con este valor...";
    else
      insertarHijo(valor, codigo_padre, direccion);
  }
  else
    insertarRaiz(valor);

  getch();
}

void Arbol::mostrarPorWhile()
{
  cout << endl << "No disponible...";
  getch();
}

void Arbol::mostrarPorRecursion()
{
  //agregar código  eloina
}

void Arbol::buscarNodo()
{
  //agregar codigo anahi
}

/* Métodos Privados */
void Arbol::insertarRaiz(int valor)
{
  Nodo *nuevo = new Nodo(valor, NULL);
  raiz = nuevo;
  cout << endl << "Proceso exitoso...";
}

void Arbol::insertarHijo(int valor, Nodo *nodo, bool direccion)
{
  Nodo *nuevo = new Nodo(valor, nodo);

  // true es derecha y false es izquierda
  if(direccion)
    nodo->setDerecha(nuevo);
  else
    nodo->setIzquierda(nuevo);

  cout << endl << "Proceso exitoso...";
}

Nodo *Arbol::getNodo(int valor, Nodo *nodo)
{
  // escribir codigo  brenda
}

void Arbol::muestreoRecursivo(Nodo *nodo)
{
  // eloina
}

void Arbol::encabezadoArbol()
{
  // escribir codigo brenda
}

void Arbol::encabezadoArbolIndividual()
{
  cout << setw(LONGITUD_NODO) << left << "Codigo"
       << setw(LONGITUD_NODO) << left << "Valor"
       << setw(LONGITUD_HIJO) << left << "Nodo Izquierdo"
       << setw(LONGITUD_HIJO) << left << "Valor Izquierdo"
       << setw(LONGITUD_HIJO) << left << "Nodo Derecho"
       << setw(LONGITUD_HIJO) << left << "Valor Derecho"
       << endl;
}

void Arbol::mostrarDatos(Nodo *nodo)
{
  // escribir codigo brenda
}

void Arbol::mostrarDatosIndividual(Nodo *nodo)
{
  Nodo *izquierda = nodo->getIzquierda();
  Nodo *derecha = nodo->getDerecha();
  int valor_izquierda = 0;
  int valor_derecha = 0;

  valor_izquierda = (izquierda) ? izquierda->getValor() : 0;
  valor_derecha = (derecha) ? derecha->getValor() : 0;

  cout << setw(LONGITUD_NODO) << left << nodo
       << setw(LONGITUD_NODO) << left << nodo->getValor()
       << setw(LONGITUD_HIJO) << left << izquierda
       << setw(LONGITUD_HIJO) << left << valor_izquierda
       << setw(LONGITUD_HIJO) << left << derecha
       << setw(LONGITUD_HIJO) << left << valor_derecha << endl;

  cout << endl << "Presione cualquier tecla para continuar...";
}



