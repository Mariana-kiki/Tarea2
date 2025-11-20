/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 15*/

#include <stdio.h>
void main ()
{
    int n, i;
    int positivos = 0, negativos = 0, nulos = 0;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n];

    for(i = 0; i < n; i++) 
    {
        printf("Ingrese el elemento %d: ", i+1);
        scanf("%d", &arreglo[i]);
        if(arreglo[i] > 0) 
        {
            positivos++;
        } 
        else 
          if(arreglo[i] < 0) 
          {
            negativos++;
        } 
          else 
          {
            nulos++;
        }
    }
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);
}
