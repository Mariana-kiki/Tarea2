/*Mariana Gutiérrez Acosta
Tarea 2 ejercicio 1*/
#include <stdio.h>

void main() 
{
    int num1, num2;
    int suma, resta, multiplicacion;
  
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    printf("\nResultados:\n");
    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicación: %d\n", multiplicacion);
}
