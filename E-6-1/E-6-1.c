/*
 ============================================================================
 Name        : E-6-1.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 6-1:
 Disponemos de dos variables numéricas (a y b).
 Realizar un algoritmo que permita el intercambio de valores de dichas variables.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblio6.h"
#define T 20

int main(void)
{
	setbuf(stdout, NULL);
	int num1[T] = { 5 };
	int num2[T] = { 9 };
	int r;
	int numeroUno;
	numeroUno = intercambio(num1, num2, &r);

	printf("numero1 %d\n"
					"numero2 %d\n", numeroUno, r);

	return EXIT_SUCCESS;

}

