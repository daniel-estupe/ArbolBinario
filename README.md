
# Proyecto Arbol Binario

Estructura de árbol binario escrito en el lenguaje C++.


## VERSION 1. Nodos consecutivos

La primera version del programa incluye crear y mostrar nodos consecutivos.

### Caracteristica: como usuario necesito acceder al programa y que muestre un menu	

+ **Given(Dado):** un usuario inicia el programa.
+ **When(Cuando):** carge el sistema
+ **Then(Entonces):** debe mostrar el siguiente menu

	  1. Insertar un nodo
	  2. Listar nodos usando while
	  3. Listar nodos usando recursividad
	  4. Salir


### Caracteristica: como usuario requiero opcion para ingresar nodos consecutivos	

+ **Given:** Ingreso al menu
+ **When:**	Accedo a la opcion 1. insertar un nodo
+ **Then:**	Puedo escribir un valor entero para el nodo y crearlo al presionar enter
	
### Caracteristica: como usuario requiero una opcion listar los nodos que he ingresado	

Escenario 1	
+ **Given:** Ingreso al menu
+ **When:**	Accedo a la opcion 2. Lista nodos usando while
+ **Then:**	el resultado se debe ser:

Ejemplo: 

    Codigo nodo    Valor del nodo    nodo siguiente
    1000             10               2000  
    2000             43               3000
    3000             32                 0   


Escenario 2	

+ **Given:** Ingreso al menu
+ **When:**	Accedo a la opcion 3. Lista nodos usando recursividad
+ **Then:**	El resultado se debe ser 

Ejemplo:

    Codigo nodo    Valor del nodo    nodo siguiente
    1000             10               2000  
    2000             43               3000
    3000             32                 0


### Caracteristica: como usuario requiero salir del sistema	

Escenario 1	
+ **Given:** Ingreso al menu
+ **When:**	Accedo a la opcion 4. Salir
+ **Then:**	Muestra un mensaje de salida hasta que el usuario presione una tecla para salir



## VERSION 2. Agregar nodo izquierdo y derecho.

### Caracteristica: como usuario requiero opcion para ingresar un nodo izquierdo y derecho	

Escenario 1	No existe raiz en el arbol
+ **Given:**	Ingreso al menu
+ **When:**	Accedo a la opcion 1. insertar un nodo
+ **Then:**	Puedo escribir el valor de la raiz del árbol
	
Escenario 2	Ya existe raiz en el arbol
+ **Given:**	Ingreso al menu
+ **When:**	Accedo a la opcion 1. insertar un nodo
+ **Then:**	El usuario ingresa el valor del nodo padre al que le quiere dar el nuevo nodo ->
		Indica la direccion del nuevo nodo ->
		Ingresa el valor del nuevo nodo.
	
	Escenario 2.1 	El valor del nodo padre existe y la dirección está disponible 	
	+ **Given:** El usuario ingresa el valor del nuevo nodo
	+ **When:** Presiona enter
	+ **Then:** El nodo es creado en la dirección antes especificada

	Escenario 2.2 	El valor del nodo padre existe y la dirección no está disponible 	
	+ **Given:** El usuario ingresa el valor del nuevo nodo
	+ **When:** Presiona enter
	+ **Then:** Se muestra un mensaje de alerta que ya esta ocupada esa direccion y regresa al menú principal 
	
	Escenario 2.3 	El valor del nodo padre no existe 
	+ **Given:** El sistema busca la dirección del nodo padre según el valor ingresado
	+ **When:** Termina de buscar y la dirección no es encontrada
	+ **Then:** El sistema muestra la notificación de que el nodo padre no existe y regresa al menú principal



### Caracteristica: como usuario requiero una opcion para listar los nodos que he ingresado	

Escenario 1	
+ **Given:** ingreso al menu
+ **When:** accedo a la opcion 2. Lista nodos usando while
+ **Then:** el resultado se debe ser como el ejemplo

Ejemplo:

	Codigo nodo    Valor del nodo    Nodo Izquierdo		Nodo Derecho
    	1000             10               2000  		3000
    	2000             43               0			0
    	3000             32               0			0

Escenario 2	
+ **Given:** ingreso al menu
+ **When:** accedo a la opcion 3. Lista nodos usando recursividad
+ **Then:**	el resultado se debe ser como el ejemplo
	
Ejemplo:

    Codigo nodo    Valor del nodo    Nodo Izquierdo	Nodo Derecho
    1000             10               2000  		3000
    2000             43               0			0
    3000             32               0			0
  
Escenario 3
+ **Given:** ingreso al menu
+ **When:** accedo a la opcion 2 o 3 y no hay datos en el arbol
+ **Then:** Muestra la notificacion que no hay datos existentes en el arbol y regresa al menu principal


### Caracteristica: como usuario requiero una opcion para buscar un nodo

+ **Given:** ingreso al menu
+ **When:** carge el sistema
+ **Then:** debe de aparecer una opcion con nombre "4. Buscar un nodo por valor"

### Caracteristica: como usuario requiero cambiar reemplazar el titulo de la opcion salir

+ **Given:** ingreso al menu
+ **When:** carge el sistema
+ **Then:** cambiar la opcion "4. Salir" a "5. Salir"


## Caracteristica: como usuario requiero buscar un nodo por valor

+ **Given:** ingreso al menu
+ **When:** entre a la opcion "4. Buscar un nodo por valor"
+ **And** ingrese el valor a buscar
+ **Then:** debe de mostrar el resultado del ejemplo

Ejemplo:

     Codigo nodo: 0001, Valor del nodo: 10, nodo izquierdo: 002, valor nodo izquierdo:20, nodo derecho: 003 y valor nodo derecho: 9




## Autores

* **Daniel Estupe** - [DanielEstupe](https://github.com/DanielEstupe)
* **Brenda Blanco** - [bdeleonb](https://github.com/bdeleonb)
* **Eloina Carrillo** - [FranciscaC](https://github.com/FranciscaC)
* **Anahi Montiel** - [AnahiMontiel](https://github.com/AnahiMontiel)


## IDE

* [CodeBlocks](http://www.codeblocks.org/) - El IDE en el que fue compilado el proyecto

### Nota

Para ejecutar este proyecto en tu computadora debes abrir el archivo .cbp y con el IDE CodeBlocks.
