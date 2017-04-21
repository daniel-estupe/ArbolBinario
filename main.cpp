#include "Menu.h"
#include "Arbol.h"

int main() {
  estilizar();

  char opcion;
  Arbol arbol;

  do
  {
    mostrarMenu();
    opcion = obtenerItem();
    ejecutar(opcion, &arbol);
  } while(opcion != SALIR);

  return 0;
}
