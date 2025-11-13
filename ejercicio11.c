/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 11*/

#include <stdio.h>

void main()
{
    int i = 10;
    int suma = 0;

    while (i <= 50) 
    {
        suma += i;
        i += 2;  
    }
    printf("La suma de los números pares entre 10 y 50 es: %d\n", suma);
}
