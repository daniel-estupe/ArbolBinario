
# Proyecto Arbol Binario

Estructura de árbol binario escrito en el lenguaje C++.




## VERSION 1. Nodos consecutivos

La primera version del programa incluye crear y mostrar nodos consecutivos.

### Caracteristica: acceso al programa y mostrar un menu	

+ **Given(Dado):** un usuario inicia el programa.
+ **When(Cuando):** carge el sistema
+ **Then(Entonces):** debe mostrar el siguiente menu

	  1. Insertar un nodo
	  2. Listar nodos usando while
	  3. Listar nodos usando recursividad
	  4. Salir


### Caracteristica: ejecutar acciones de acuerdo la opcion del usuario y el menu

Escenario 1	El usuario ingresa una opcion valida

+ **Given(Dado):** el usuario inicia el programa.
+ **When(Cuando):** el usuario ingresa la opcion
+ **Then(Entonces):** debe ejecutar la accion de acuerdo al menu

Escenario 2	El usuario ingresa una opcion invalida

+ **Given(Dado):** el usuario inicia el programa.
+ **When(Cuando):** el usuario ingresa la opcion
+ **Then(Entonces):** el sistema muestra una notificacion y regresa al menu principal

### Caracteristica: ingresar nodos consecutivos	

+ **Given:** Ingreso al menu
+ **When:**	Accedo a la opcion 1. insertar un nodo
+ **Then:**	Puedo escribir un valor entero para el nodo y crearlo al presionar enter
	
### Caracteristica: listar los nodos que se han ingresado	

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


Escenario 3

+ **Given:** Ingreso al menu
+ **When:**	Accedo a la opcion 3. Lista nodos usando recursividad
+ **And:**   No hay datos en el sistema
+ **Then:**	Se muestra una notificacion de que no hay datos en el sistema 

### Caracteristica: salir del sistema	

Escenario 1	
+ **Given:** Ingreso al menu
+ **When:**	Accedo a la opcion 4. Salir
+ **Then:**	Muestra un mensaje de salida hasta que el usuario presione una tecla para salir






## VERSION 2. Agregar nodo izquierdo y derecho.


### Caracteristica: acceso al programa y mostrar un menu con las nuevas funciones del sistema	

+ **Given(Dado):** un usuario inicia el programa.
+ **When(Cuando):** carge el sistema
+ **Then(Entonces):** debe mostrar el siguiente menu

	  1. Insertar un nodo
	  2. Listar nodos usando while
	  3. Listar nodos usando recursividad
	  4. Buscar un nodo por valor
	  5. Salir


### Caracteristica: ejecutar acciones de acuerdo la opcion del usuario y el menu


### Caracteristica: ingreso de nodo izquierdo y derecho	

Escenario 1	No existe raiz en el arbol
+ **Given:**	Ingreso al menu
+ **When:**	Accedo a la opcion 1. insertar un nodo
+ **Then:**	El usuario ingresa el valor de la raiz del árbol
	
Escenario 2	Ya existe raiz en el arbol
+ **Given:**	Ingreso al menu
+ **When:**	Accedo a la opcion 1. insertar un nodo
+ **Then:**	El usuario ingresa el valor del nodo padre al que le quiere dar el nuevo nodo ->
		Indica la direccion del nuevo nodo ->
		Ingresa el valor del nuevo nodo.
	
	Escenario 2.1 	El valor del nodo existe y la dirección indicada por el usuario está disponible 	
	+ **Given:** El usuario ingresa el valor del nuevo nodo
	+ **When:** Presiona enter
	+ **Then:** El nodo es creado en la dirección antes especificada

	Escenario 2.2 	El valor del nodo existe y la dirección indicada por el usuario no está disponible 	
	+ **Given:** El usuario ingresa el valor del nuevo nodo
	+ **When:** Presiona enter
	+ **Then:** Se muestra un mensaje de alerta que ya esta ocupada esa direccion y regresa al menú principal 
	
	Escenario 2.3 	El valor del nodo ya existe 
	+ **Given:** El sistema busca la dirección del nodo según el valor ingresado
	+ **When:** Termina de buscar y la dirección es encontrada
	+ **Then:** El sistema muestra la notificación de que ya existe un nodo con ese valor y regresa al menú principal
	
	Escenario 2.4 	El valor del nodo no existe 
	+ **Given:** El sistema busca la dirección del nodo según el valor ingresado
	+ **When:** Termina de buscar y la dirección no es encontrada
	+ **Then:** El sistema muestra la notificación de que el nodo no existe y regresa al menú principal

	

### Caracteristica: opcion para listar los nodos que he ingresado	

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
+ **When:** accedo a la opcion 2 o 3
+ **And:** No hay datos en el arbol
+ **Then:** Muestra la notificacion que no hay datos existentes en el arbol y regresa al menu principal


### Caracteristica: buscar un nodo por valor

Escenario 1
+ **Given:** El usuario ingresa la opcion 4
+ **When:** El usuario ingresa el valor del nodo
+ **And** el valor del nodo es encontrado
+ **Then:** debe de mostrar el resultado del ejemplo

Ejemplo:

     Codigo 	Valor	 Nodo Izquierdo	   Valor Izquierdo	Nodo Derecho	  Valor Derecho
     0xbc0d38 	10	 0xbc0d50	   40			0xbc0d83	   82

Escenario 2
+ **Given:** El usuario ingresa la opcion 4
+ **When:** El usuario ingresa el valor del nodo
+ **And** el valor del nodo no fue encontrado
+ **Then:** muestra la opcion de que el nodo no fue encontrado





## VERSION 3. Eliminar un nodo

### Caracteristica: acceso al programa y mostrar un menu con las nuevas funciones del sistema	

+ **Given(Dado):** un usuario inicia el programa.
+ **When(Cuando):** carge el sistema
+ **Then(Entonces):** debe mostrar el siguiente menu

	  1. Insertar un nodo
	  2. Listar nodos usando while
	  3. Listar nodos usando recursividad
	  4. Buscar un nodo por valor
	  5. Eliminar nodo
	  6. Salir


### Caracteristica: ejecutar acciones de acuerdo la opcion del usuario y el menu

### Caracteristica: eliminar un nodo.

Escenario 1	
+ **Given:** El usuario ingresa el valor a eliminar
+ **When:** El sistema termina la busqueda
+ **And** Ha encontrado el nodo segun el valor
+ **Then:** Elimina el nodo  y sus hijos del arbol.

Escenario 2
+ **Given:** El usuario ingresa el valor a eliminar
+ **When:** El sistema termina la busqueda
+ **And** No ha encontrado el nodo segun el valor
+ **Then:** Muestra un notificacion de que el nodo no ha sido encontrado 



## VERSION 4. Recorridos de un arbol.

### Caracteristica: acceso al programa y mostrar un menu con las nuevas funciones del sistema	

+ **Given(Dado):** un usuario inicia el programa.
+ **When(Cuando):** carge el sistema
+ **Then(Entonces):** debe mostrar el siguiente menu

	  1. Insertar un nodo
	  2. Listar nodos usando while
	  3. Listar nodos usando recursividad
	  4. Recorrer arbol
	  5. Buscar un nodo por valor
	  6. Eliminar nodo
	  7. Salir


### Caracteristica: ejecutar acciones de acuerdo la opcion del usuario y el menu

### Caracteristica: reccorrer el arbol en preorden

+ **Given:** ingreso al menu
+ **When:** selecciona la opcion recorrer arbol en preorden
+ **Then:** muestra el resultado del recorrido en preorden

### Caracteristica: reccorrer el arbol en preorden

+ **Given:** ingreso al menu
+ **When:** selecciona la opcion recorrer arbol en postorden
+ **Then:** muestra el resultado del recorrido en postorden

### Caracteristica: reccorrer el arbol en inorden

+ **Given:** ingreso al menu
+ **When:** selecciona la opcion recorrer arbol en inorden
+ **Then:** muestra el resultado del recorrido en inorden



## Autores

* **Daniel Estupe** - [DanielEstupe](https://github.com/DanielEstupe)
* **Brenda Blanco** - [bdeleonb](https://github.com/bdeleonb)
* **Eloina Carrillo** - [FranciscaC](https://github.com/FranciscaC)
* **Anahi Montiel** - [AnahiMontiel](https://github.com/AnahiMontiel)


## IDE

* [CodeBlocks](http://www.codeblocks.org/) - El IDE en el que fue compilado el proyecto

### Nota

Para ejecutar este proyecto en tu computadora debes abrir el archivo .cbp y con el IDE CodeBlocks.
