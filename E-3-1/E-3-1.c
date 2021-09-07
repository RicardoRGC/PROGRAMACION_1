/*
 ============================================================================
 Name        : E-3-1.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 3-1:
 Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void numeroFlotante(float);
int main(void)
{
	setbuf(stdout, NULL);

	numeroFlotante(8.5);

	return EXIT_SUCCESS;
}
void numeroFlotante(float numero)
{
	printf("el numero ingresado %.2f", numero);
}
