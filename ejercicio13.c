/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 13*/

#include <stdio.h>

void main() 
{
    int n, i;
    int suma = 0;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n]; 
  
    for(i = 0; i < n; i++) 
    {
        printf("Ingrese el elemento %d: ", i+1);
        scanf("%d", &arreglo[i]);
        suma = suma + arreglo[i]; 
    }
    printf("La suma de los elementos es: %d\n", suma);
}
