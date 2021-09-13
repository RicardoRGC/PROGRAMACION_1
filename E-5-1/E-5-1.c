/*
 ============================================================================
 Name        : E-5-1.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 5-1:
 Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define T 5
// arrays
void MostrarNumeros(int p[], int tam);
void PedirNumeros(int p[], int tam);
void SumarNumeros(int p[], int tam);

int main(void)
{
	setbuf(stdout, NULL);
	int numeros[T];

	PedirNumeros(numeros, T);
	MostrarNumeros(numeros, T);
	SumarNumeros(numeros, T);

	return EXIT_SUCCESS;
}
void SumarNumeros(int p[], int tam)
{
	int sumaNumeros;
	sumaNumeros = 0;
	for (int i = 0; i < tam; i++)
	{

		sumaNumeros = sumaNumeros + p[i];

	}
	printf("%d\n", sumaNumeros);

}
void PedirNumeros(int p[], int tam)
{
	int i;
	for (i = 0; i < tam; i++)
	{
		printf("ingrese numeros:");
		scanf("%d", &p[i]);
	}

}

/// @param p visualiza 5 numeros de un arrays.
void MostrarNumeros(int p[], int tam)
{
	int i;
	for (i = 0; i < tam; i++)
	{
		printf("%d\n", p[i]);
		
	}
}
