/*
 ============================================================================
 Name        : E-3-3.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 3-3:
 Crear una funci�n que pida el ingreso de un entero y lo retorne.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int RetomarEntero(void);
int main(void)
{
	setbuf(stdout, NULL);

	int numeroENtero;
	numeroENtero = RetomarEntero();

	printf("numero entero: %d", numeroENtero);

	return EXIT_SUCCESS;
}
int RetomarEntero(void) //prototipo
{
	int numeroUno;

	printf("ingrese un numero");
	scanf("%d", &numeroUno);

	return numeroUno;
	
}
