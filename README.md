
# Proyecto Arbol Binario

Estructura de árbol binario escrito en el lenguaje C++.


## VERSION 1. 

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


## Autores

* **Daniel Estupe** - [DanielEstupe](https://github.com/DanielEstupe)
* **Brenda Blanco** - [bdeleonb](https://github.com/bdeleonb)
* **Eloina Carrillo** - [FranciscaC](https://github.com/FranciscaC)
* **Anahi Montiel** - [AnahiMontiel](https://github.com/AnahiMontiel)


## IDE

* [CodeBlocks](http://www.codeblocks.org/) - El IDE en el que fue compilado el proyecto

### Nota

Para ejecutar este proyecto en tu computadora debes abrir el archivo .cbp
