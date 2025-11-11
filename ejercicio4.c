/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 4*/

#include <stdio.h>

void main() 
{
    int cantidad, tasa;
    int monto_final;

    printf("Ingrese la cantidad invertida: ");
    scanf("%d", &cantidad);

    printf("Ingrese la tasa de interés mensual (en %): ");
    scanf("%d", &tasa);

    monto_final = cantidad + (cantidad * tasa / 100);

    printf("Monto final al finalizar el mes: %d\n", monto_final);
}
