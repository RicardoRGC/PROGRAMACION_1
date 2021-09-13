/*
 ============================================================================
 Name        : 2-1  2-2
 Author      : Gonzalez Ricardo 1-F
 Clase 2
 Ejercicio 2-1:
 Crear una funci�n que reciba como par�metro
 un numero entero.
 La funci�n retornara 1 en caso de que sea positivo,
 -1 en caso de que sea negativo y
 0 en caso de que sea 0.
 Realizar la prueba l�gica de la funci�n
 en el main.
 Ejercicio 2-2:
 Realizar un programa que permita el ingreso de 10
 n�meros enteros.
 Determinar el promedio de los positivos,
 la cantidad de ceros y del menor de los negativos
 la suma de los antecesores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void)
{
	setbuf(stdout, NULL);
	int numeroIngresado;

	numeroIngresado = ingresarEntero(10);

	if (numeroIngresado == 1)
	{
		printf("es positivo");

	}
	else
	{
		if (numeroIngresado == -1)
		{
			printf("es negativo");
		}
		else
		{
			printf("es  cero");
		}
	}

	return EXIT_SUCCESS;
}
//implement
int ingresarEntero(int numero) // coup
{
	int numeroIngresado;
	if (numero == 0)
	{
		numeroIngresado = 0;
	}
	else
	{
		if (numero < 0)
		{
			numeroIngresado = -1;
		}
		else
		{
			numeroIngresado = 1;
		}
	}

	return numeroIngresado;
}
