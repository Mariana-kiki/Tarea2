/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 10*/

#include <stdio.h>

void main()
{
  int N, i;
    int positivos = 0, negativos = 0, nulos = 0;

    for (i = 1; i <= 100; i++) 
    {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &N);

        if (N > 0)
        {
            positivos++;
        }
        else
        {
            if (N < 0)
            {
                negativos++;
            }
            else
            {
                nulos++;
            }
        }
    }
    printf("\nCantidad de positivos: %d\n", positivos);
    printf("Cantidad de negativos: %d\n", negativos);
    printf("Cantidad de nulos: %d\n", nulos);
}
