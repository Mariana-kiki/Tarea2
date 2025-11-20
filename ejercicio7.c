/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 7*/

#include <stdio.h>
#define PrecioxKm 0.23 

void main() 
{
    int distancia_ida, dias_estancia;
    float distancia_total, precio, descuento = 0;
    int precio_final;
    printf("Ingrese la distancia de ida (en km): ");
    scanf("%d", &distancia_ida);
    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &dias_estancia);
    distancia_total = distancia_ida * 2;
    precio = distancia_total * PrecioxKm;

    if (dias_estancia > 7 && distancia_total > 800) 
    {
        descuento = precio * 0.30;
    }
    precio_final = precio - descuento;  
    printf("El precio final del ticket es: $%d\n", precio_final);
}
