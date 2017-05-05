# ArbolBinario
Estructura de árbol binario escrito en el lenguaje C++.

<strong>Integrantes:</strong> 
<br/>
Brenda Blanco <br/>
Daniel Estupe </br>
Eloina Carrillo <br/>
Anahi Montiel <br/>

<br/>

<strong>Este proyecto fue compilado en el IDE CodeBlocks</strong>

<q>Para ejecutar este proyecto en tu computadora debes abrir el
   archivo .cbp</q>


#VERSION 1. Nodos consecutivos.

## Caracteristica: como usuario necesito acceder al programa y que muestre un menu <br/>
Given (Dado)	Un usuario inicia el programa <br/>
When(Cuando)	Carge el sistema <br/>
Then (Entonces)	debe mostrar un el siguiente menu <br/>
	1. Insertar un nodo <br/>
	2. Listar nodos usando while <br/>
	3. Listar nodos usando recursividad <br/>
	4. Salir <br/>

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
