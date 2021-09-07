/*
 ============================================================================
 Name        : E-5-1.c
 Author      : Gonzalez Ricardo 1-F
 Version     :
 Copyright   : setbuf(stdout, NULL);
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define T 5
// arrays
void MostrarNumeros(int p[]);
void PedirNumeros(int p[]);
void SumarNumeros(int p[]);

int main(void)
{
	setbuf(stdout, NULL);
	int numeros[T];

	PedirNumeros(numeros);
	MostrarNumeros(numeros);
	SumarNumeros(numeros);

	return EXIT_SUCCESS;
}
void SumarNumeros(int p[])
{
	int sumaNumeros;
	sumaNumeros = 0;
	for (int i = 0; i < T; i++)
	{

		sumaNumeros = sumaNumeros + p[i];

	}
	printf("%d\n", sumaNumeros);

}
void PedirNumeros(int p[])
{
	int i;
	for (i = 0; i < T; i++)
	{
		printf("ingrese numeros:");
		scanf("%d", &p[i]);
	}

}

/// @param p visualiza 5 numeros de un arrays.
void MostrarNumeros(int p[])
{
	int i;
	for (i = 0; i < T; i++)
	{
		printf("%d\n", p[i]);
		
	}
}
