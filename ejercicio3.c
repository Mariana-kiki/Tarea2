/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 3*/

#include <stdio.h>

void main() 
{
    int dolares, pesos;

    printf("Ingrese la cantidad en dólares: ");
    scanf("%d", &dolares);

    pesos = dolares * 11.96;
    
    printf("Equivalente en pesos: %d\n", pesos);
}
