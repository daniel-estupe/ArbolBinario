#include "Arbol.h"
#define LONGITUD_NODO 12
#define LONGITUD_HIJO 18

const bool DERECHA = true;
const bool IZQUIERDA = false;

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
  // Aún no funciona
  cout << endl << "Opcion no disponible..."; getch();
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

void Arbol::buscarNodo()
{
  int valor;
  Nodo *codigo_nodo = NULL;

  if(raiz != NULL)
  {
    cout << "Ingrese el valor del nodo: ";
    cin >> valor;

    cout << endl;

    codigo_nodo = getNodo(valor, raiz);
    if(codigo_nodo != NULL)
    {
      encabezadoArbolIndividual();
      mostrarDatosIndividual(codigo_nodo);
      cout << endl << "Presione cualquier tecla para continuar...";
    }
    else
      cout << "Este nodo no es parte del arbol...";
  }
  else
    cout << "El arbol se encuentra vacio...";
  getch();
}

void Arbol::eliminarNodo()
{
  bool opcion_eliminar;
  int valor;
  Nodo *codigo_nodo = NULL;

  cout << "Ingrese el valor del nodo: ";
  cin >> valor;

  codigo_nodo = getNodo(valor, raiz);

  if(codigo_nodo != NULL)
  {
    if(codigo_nodo != raiz)
    {
      cout << endl;

      encabezadoArbolIndividual();
      mostrarDatosIndividual(codigo_nodo);

      cout << endl << "ADVERTENCIA:\n\tSe eliminaran los hijos que contenga el nodo. Desea eliminar? Si(1) No(0): ";
      cin >> opcion_eliminar;

      if(opcion_eliminar == true)
      {
        elimina(codigo_nodo);
        cout << endl << "Proceso exitoso...";
      }
      else
        cout << endl << "Presione cualquier tecla para continuar...";
    }
    else
    {
      cout << endl << "No puedes eliminar la raiz...";
    }
  }
  else
  {
    cout << endl << "El nodo no es parte del arbol...";
  }
  getch();
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
  if(direccion == DERECHA)
    nodo->setDerecha(nuevo);
  else
    nodo->setIzquierda(nuevo);

  cout << endl << "Proceso exitoso...";
}

Nodo *Arbol::getNodo(int valor, Nodo *nodo)
{
  if(nodo == NULL)
    return nodo;

  else if(nodo->getValor() == valor)
    return nodo;

  else if(getNodo(valor, nodo->getIzquierda()) != NULL)
    return getNodo(valor, nodo->getIzquierda());

  else if(getNodo(valor, nodo->getDerecha()) != NULL)
    return getNodo(valor, nodo->getDerecha());

  else return NULL;
}

void Arbol::muestreoRecursivo(Nodo *nodo)
{
  if(nodo == NULL)
    return;
  else
    mostrarDatos(nodo);

  if(nodo->getIzquierda())
    muestreoRecursivo(nodo->getIzquierda());
  if(nodo->getDerecha())
    muestreoRecursivo(nodo->getDerecha());
}

void Arbol::elimina(Nodo *nodo)
{
  Nodo *codigo_padre = NULL;
  bool direccion = false; /* true es derecha y false es izquierda */

  /* paso recursivo: post-orden */
  if(nodo->getIzquierda() != NULL)
    elimina(nodo->getIzquierda());
  if(nodo->getDerecha() != NULL)
    elimina(nodo->getDerecha());

  codigo_padre = nodo->getPadre();

  if(codigo_padre != NULL)
  {
    direccion = nodo->getDireccion();

    if(direccion == true)
      codigo_padre->setDerecha(NULL);
    else
      codigo_padre->setIzquierda(NULL);
  }

  delete nodo;
}

void Arbol::encabezadoArbol()
{
  cout << setw(LONGITUD_NODO) << left << "Codigo"
       << setw(LONGITUD_NODO) << left << "Valor"
       << setw(LONGITUD_HIJO) << left << "Nodo Izquierdo"
       << setw(LONGITUD_HIJO) << left << "Nodo Derecho"
       << endl;
}

void Arbol::encabezadoArbolIndividual()
{
  cout << setw(LONGITUD_NODO) << left << "Codigo"
       << setw(LONGITUD_HIJO) << left << "Identificacion"
       << setw(LONGITUD_NODO) << left << "Valor"
       << setw(LONGITUD_HIJO) << left << "Nodo Izquierdo"
       << setw(LONGITUD_HIJO) << left << "Valor Izquierdo"
       << setw(LONGITUD_HIJO) << left << "Nodo Derecho"
       << setw(LONGITUD_HIJO) << left << "Valor Derecho"
       << endl;
}

void Arbol::mostrarDatos(Nodo *nodo)
{
  cout << setw(LONGITUD_NODO) << left << nodo
       << setw(LONGITUD_NODO)  << left << nodo->getValor()
       << setw(LONGITUD_HIJO) << left << nodo->getIzquierda()
       << setw(LONGITUD_HIJO) << left << nodo->getDerecha() << endl;
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
       << setw(LONGITUD_HIJO) << left << nodo->obtenerIdentidad()
       << setw(LONGITUD_NODO) << left << nodo->getValor()
       << setw(LONGITUD_HIJO) << left << izquierda
       << setw(LONGITUD_HIJO) << left << valor_izquierda
       << setw(LONGITUD_HIJO) << left << derecha
       << setw(LONGITUD_HIJO) << left << valor_derecha << endl;
}


