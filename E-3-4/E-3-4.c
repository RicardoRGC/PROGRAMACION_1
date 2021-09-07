/*
 ============================================================================
 Name        : E-3-4.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 3-4:
 Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void)
{
	setbuf(stdout, NULL);

	int edad;
	edad = PedirEntero("ingrese edad ", 18, 99);
	printf("la edad es: %d", edad);

	return EXIT_SUCCESS;
}

