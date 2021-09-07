/*
 ============================================================================
 Name        : E-4-2.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 4-2:
 Realizar un programa que permita la carga de
 temperaturas en celsius y fahrenheit , validando que
 las temperaturas ingresadas estén entre el punto de
 congelación y ebullición del agua para cada tipo de escala.
 Las validaciones se hacen en una biblioteca.
 Las funciones de transformación de fahrenheit a celsius
 y de celsius a fahrenheit se hacen en otra biblioteca.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void)
{
	setbuf(stdout, NULL);
	float celsius;
	float fahrenheit;
	int opcion;
	char flagUno = 1;
	char flagDos = 1;

	do
	{
		if (flagUno == 1)
		{
			printf("\n 1 para grados celsius\n");
		}
		else
		{
			printf(" %.2f celsius\n", celsius);
		}
		if (flagDos == 1)
		{
			printf("\n 2 para grados fahrenheit\n");
		}
		else
		{
			printf(" %.2f fahrenheit\n", fahrenheit);
		}

		printf(".3 convertir");
		printf("\n 5 para salir\n");
		scanf("%d", &opcion);

		if (opcion == 1)
		{
			printf("ingrese celsius ");
			scanf("%f", &celsius);
			flagUno = 0;
		}
		else
		{
			if (opcion == 2)
			{
				printf("ingrese fahrenheit ");
				scanf("%f", &fahrenheit);
				flagDos = 0;
			}

			else
			{
				if (opcion == 5)
				{
					printf("Adios");

				}
				else
				{
					if (opcion == 3)
					{
						printf("convertir");
					}
					else
					{
						printf("error reingrese opcion");
					}
				}

			}

		}

	}
	while (opcion != 5);

	return EXIT_SUCCESS;
}
