/*
 ============================================================================
 Name        : E-4-1.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 4-1:
 Realizar un programa EN EL MAIN que permita calcular
 y mostrar el factorial de un n?mero.
 Por ejemplo:
 5! = 5*4*3*2*1 = 120

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numeroIngresado;
	int multiplicacion;

	int i;

	printf("ingrese numero a factorizar");

	scanf("%d", &numeroIngresado);

	//numeroUNO = numeroIngresado - 1;

	i = numeroIngresado - 1;

	multiplicacion = numeroIngresado;

	for (; i > 1; i--)
	{
		multiplicacion = multiplicacion * i;

	}

	printf("factorizacion: %d", multiplicacion);

	return EXIT_SUCCESS;
}

