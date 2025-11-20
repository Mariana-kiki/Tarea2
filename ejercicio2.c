/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 2*/

#include <stdio.h>

void main() 
{
    int radio, area, circunferencia;

    printf("Ingrese el radio del círculo: ");
    scanf("%d", &radio);

    while (radio < 0) 
    {
        printf("El radio no puede ser negativo. Intentalo de nuevo: ");
        scanf("%d", &radio);
    }
    area = 3.1416 * radio * radio;         
    circunferencia = 2 * 3.1416 * radio;    
    printf("\nResultados:\n");
    printf("Área del círculo: %d\n", area);
    printf("Circunferencia: %d\n", circunferencia);
}
