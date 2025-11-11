/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 8*/

#include <stdio.h>

void main() 
{
    int a, b;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);

    if (a % b == 0 || b % a == 0) 
    {
        printf("Uno de los números es divisor del otro.\n");
    } 
    else 
    {
        printf("Ninguno de los números es divisor del otro.\n");
    }
}
