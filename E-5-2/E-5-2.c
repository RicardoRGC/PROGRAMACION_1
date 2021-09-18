/*
 ============================================================================
 Name        : E-5-2.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 5-2:

 Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
 Cantidad de positivos y negativos.
 Sumatoria de los pares.
 El mayor de los impares.
 Listado de los números ingresados.
 Listado de los números pares.
 Listado de los números de las posiciones impares.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bi.h"
#define T 10

int main(void)
{
	setbuf(stdout, NULL);
	/*1. CargarVector-
	 2. ContarPositivosNegativos-
	 3. SumarPares
	 4. MostrarMayorImpar
	 5. MostrarVector
	 6. MostrarNumerosPares
	 7. MostrarNumerosPosicionesImpares

	 8. PedirEntero-
	 9. DeterminarParidad
	 10. ValidarEntero-
	 11. DeterminarSigno-

	 */

	int numeros[T];

	CargarVector("ingresar numeros ENTRE -1000 a 1000", numeros, T, -1000, 1000);

	ContarPositivosNegativos(numeros, T);
	SumarPares(numeros, T);
	MostrarMayorImpar(numeros, T);

	MostrarNumerosPares(numeros, T);
	printf("numeros ingresados\n");
	MostrarVector(numeros, T);
	MostrarNumerosImpares(numeros, T);

	return EXIT_SUCCESS;
}
