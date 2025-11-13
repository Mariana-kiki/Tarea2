/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 12*/

#include <stdio.h>

void main() 
{
    int N, i = 1;
    double producto = 1;
    printf("Ingrese un número natural: ");
    scanf("%d", &N);

    if (N < 1) 
    {
        printf("Debe ingresar un número natural positivo.\n");
    }
    while (i <= N) 
    {
        producto *= i;
        i++;
    }
    printf("El producto de los %d primeros números naturales es: %.0f\n", N, producto);
}
