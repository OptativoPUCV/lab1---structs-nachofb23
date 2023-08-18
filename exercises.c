#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size) {
    if (size == 0) {
        return -1; 
    }

    int mayor = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
    };
    return mayor;
}

/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size){
  int inicio = 0;
  int fin = size - 1; 

  while (inicio < fin){
    int temp = arr[inicio];
    arr[inicio] = arr[fin];
    arr[fin] = temp;

    inicio++;
    fin--;
  }
}



/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
*/
int* filtrar_pares(int arr[], int tam, int* nuevo_tam){
  int num_pares  = 0;

  for (int i = 0; i < tam; i++) {
    if (arr[i] % 2 == 0) {
      num_pares++;
    }
  }

  int* arreglo_pares = (int*)malloc(num_pares * sizeof(int));
  if (arreglo_pares == NULL) {
    perror("Error en la asignacion de memoria");
    exit(EXIT_FAILURE);
  }

  int index = 0;
  for (int i = 0; i < tam; i++) {
    if (arr[i] % 2 == 0) {
      arreglo_pares[index] = arr[i];
      index++;
    }
  }
  *nuevo_tam = num_pares;
  return arreglo_pares;
}


/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
  int i = 0, j = 0, k = 0;

  while (i < size1 && j < size2) {
    if (arr1[i] < arr2[j]) {
      merged[k] = arr1[i];
      i++;
    } else {
      merged[k] = arr2[j];
      j++;
    }
    k++;
  }

  while (i < size1) {
    merged[k] = arr1[i];
    i++;
    k++;
  }

  while (j < size2) {
    merged[k] = arr2[j];
    j++;
    k++;
  }
}



/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size) {
  int ascendiente = 1;
  int descendiente = 1;

  for (int i = 1; i < size; i++) {
      if (arr[i] < arr[i - 1]) {
          ascendiente = 0;
      }
      if (arr[i] > arr[i - 1]) {
          descendiente = 0;
      }
  }

  if (ascendiente == 1) {
      return 1;  
  } else if (descendiente == 1) {
      return -1;
  } else {
      return 0;  
  }
}

/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) {
    strncpy(libro->titulo, titulo, sizeof(libro->titulo) - 1);
    libro->titulo[sizeof(libro->titulo) - 1] = '\0';

    strncpy(libro->autor.nombre, nombreAutor, sizeof(libro->autor.nombre) - 1);
    libro->autor.nombre[sizeof(libro->autor.nombre) - 1] = '\0';
    libro->autor.anioNacimiento = anioNacimiento;

    libro->anioPublicacion = anioPublicacion;
}



/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) { return NULL; }
