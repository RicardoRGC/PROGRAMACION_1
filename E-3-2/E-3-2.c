/*
 ============================================================================
 Name        : E-3-2.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 3-2:
 Crear una funci�n que permita determinar si un n�mero es par o no.
 La funci�n retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char ParOimpar(int);

int main(void)
{
	setbuf(stdout, NULL);

	int numeroIngresado;
	int ParOimparcalculo;

	printf("ingrese numero ");

	scanf("%d", &numeroIngresado);

	ParOimparcalculo = ParOimpar(numeroIngresado);
	printf("%d", ParOimparcalculo);

	return EXIT_SUCCESS;
}
char ParOimpar(int numero)
{
	if (numero % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

