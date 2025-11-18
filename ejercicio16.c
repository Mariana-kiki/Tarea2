/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 16*/

#include <stdio.h>
void main ()
{
    int arreglo[100];
    int i;

    for(i = 0; i < 100; i++) 
    {
        arreglo[i] = 2 * (i + 1);
    }
    printf("Los 100 primeros números pares son:\n");
    for(i = 0; i < 100; i++) 
    {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}
