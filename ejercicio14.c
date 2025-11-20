/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 14*/

#include <stdio.h>
void main() 
{
    int n, i, x, contador = 0;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n]; 
    for(i = 0; i < n; i++) 
    {
        printf("Ingrese el elemento %d: ", i+1);
        scanf("%d", &arreglo[i]);
    }
    printf("Ingrese el número a buscar: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++) 
    {
        if(arreglo[i] == x) 
        {
            contador++;
        }
    }
    printf("El número %d aparece %d veces en el arreglo.\n", x, contador);
}
