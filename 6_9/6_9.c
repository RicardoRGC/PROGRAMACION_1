/*
 ============================================================================
 Name        : 6_9.c
 Author      : Gonzalez Ricardo 1-F
 Version     :
 Copyright   :
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

int main(void)
{
	setbuf(stdout, NULL);
	int numeros[T];

	PedirNumeros(numeros);
	MostrarNumeros(numeros);

	puts(""); /* prints  */
	return EXIT_SUCCESS;
}
void PedirNumeros(int p[])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("ingrese numeros:");
		scanf("%d", &p[i]);
	}

}

/// @param p visualiza 5 numeros de un arrays.
void MostrarNumeros(int p[])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);

	}
}

