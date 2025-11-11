/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 2*/

#include <stdio.h>
#define PI 3.1416 

void main() 
{
    int radio;
    int area, circunferencia;

    printf("Ingrese el radio del círculo: ");
    scanf("%d", &radio);

    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    printf("\nResultados:\n");
    printf("Área del círculo: %d\n", area);
    printf("Circunferencia: %d\n", circunferencia);
}
