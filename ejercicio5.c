/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 5*/

#include <stdio.h>

void main() 
{
    int monto, descuento = 0, total;
    printf("Ingrese el monto de la compra: ");
    scanf("%d", &monto);

    if (monto > 2500) 
    {
        descuento = monto * 8 / 100; 
    }
    total = monto - descuento;
    printf("El cliente debe pagar: %d\n", total);
}
