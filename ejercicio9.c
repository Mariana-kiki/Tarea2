/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 9*/

#include <stdio.h>

void main() 
{
    int N, i;

    printf("Ingrese un número entero: ");
    scanf("%d", &N);
    printf("Tabla de multiplicar del %d:\n", N);
    
    for (i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", N, i, N * i);
    }
}
