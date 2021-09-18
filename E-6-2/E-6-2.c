/*
 ============================================================================
 Name        : E-6-2.c
 Author      : Gonzalez Ricardo 1-F

 Ejercicio 6-2:
 Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos).
 Necesito generar un listado de los números positivos de manera creciente y negativos de manera decreciente.
 (Como máximo 5 estructuras repetitivas)
 Ejemplo:
 Listado 1 : 4, 5, 6, 10, 18, 29
 Listado 2 : -1,-5,-9,-12

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define T 10
void pedirCadena(char cadena[], char mensaje[], int tam);
void OrdenarNumeros(int numero[], int tam);
void mostarAlumnos(int numeros[], int tam);
int main(void)

{

	setbuf(stdout, NULL);

	int numeros[T] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	OrdenarNumeros(numeros, T);
	mostarAlumnos(numeros, T);
	puts(""); /* prints  */
	return EXIT_SUCCESS;
}
void mostarAlumnos(int numeros[], int tam)
{
	for (int i = 0; i < T; i++)
	{
		printf("%d\n ", numeros[i]);

	}
}
void OrdenarNumeros(int numero[], int tam)
{

	float auxFlotante;

	for (int i = 0; i < tam - 1; i++)
	{
		for (int j = i + 1; j < tam; j++)
		{
			if (numero[i] < numero[j]) //criterio de ordenamiento
			{
				auxFlotante = numero[i];
				numero[i] = numero[j]; // intercambian valores
				numero[j] = auxFlotante;

			}
		}
	}
}
int PedirEntero(char mensaje[], int min, int max)
{

	int entero;
	printf("%s", mensaje);
	scanf("%d", &entero);
	//entero = ValidarEntero(entero, min, max);

	return entero;
}
void pedirCadena(char cadena[], char mensaje[], int tam) //int cantidadIntentos
{

	char auxstring[1000];

	printf(mensaje);
	fflush(stdin);
	gets(auxstring);
	//strncpy(nombre,25,aux)

	while (strlen(auxstring) > tam - 1)
	{
		printf(" ERROR ingrese nombre");
		fflush(stdin);
		gets(auxstring);
	}
	strncpy(cadena, auxstring, T);
}
