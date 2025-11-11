/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 6*/

#include <stdio.h>

void main() 
{
    int sueldo, aumento, sueldo_final;
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%d", &sueldo);

    if (sueldo < 1000) 
    {
        aumento = sueldo * 15 / 100;
    } 
    else 
    {
        aumento = sueldo * 12 / 100;
    }
    sueldo_final = sueldo + aumento;
    printf("El sueldo con aumento es: %d\n", sueldo_final);
}
