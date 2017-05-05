
# ArbolBinario
Estructura de árbol binario escrito en el lenguaje C++.
<pre>
Integrantes: 
    Brenda Blanco 
    Daniel Estupe 
    Eloina Carrillo
    Anahi Montiel

Este proyecto fue compilado en el IDE CodeBlocks

Para ejecutar este proyecto en tu computadora debes abrir el
   archivo .cbp
</pre>

#VERSION 1. Nodos consecutivos.

## Caracteristica: como usuario necesito acceder al programa y que muestre un menu 
Given (Dado)	Un usuario inicia el programa 
When(Cuando)	Carge el sistema 
Then (Entonces)	debe mostrar un el siguiente menu 
	1. Insertar un nodo 
	2. Listar nodos usando while 
	3. Listar nodos usando recursividad 
	4. Salir 

## Caracteristica: como usuario requiero opcion para ingresar nodos consecutivos	
Given:	Ingreso al menu
When	Accedo a la opcion 1. insertar un nodo
Then	Puedo escribir un valor de un nodo y crearlo
	
## Caracteristica: como usuario requiero una opcion listar los nodos que he ingresado	
Escenario 1	
Given:	Ingreso al menu
When	Accedo a la opcion 2. Lista nodos usando while
Then	el resultado se debe ser 
	Codigo nodo: 0001, Valor del nodo: 10, nodo siguiente: 002
	Codigo nodo: 0002, Valor del nodo: 20, nodo siguiente: 003
	Codigo nodo: 0003, Valor del nodo: 30, nodo siguiente: 000

Escenario 2	
Given:	Ingreso al menu
When	Accedo a la opcion 3. Lista nodos usando recursividad
Then	el resultado se debe ser 
	Codigo nodo: 0001, Valor del nodo: 10, nodo siguiente: 002
	Codigo nodo: 0002, Valor del nodo: 20, nodo siguiente: 003
	Codigo nodo: 0003, Valor del nodo: 30, nodo siguiente: 000

##Caracteristica: como usuario requiero salir del sistema
Escenario 1
Given: Ingreso al menu
When: Accedo a la opcion 4. Salir
Then: Mostrará un mensaje de despedida. 
      Esperará el ingreso de cualquier tecla de parte del usuario para salir.


