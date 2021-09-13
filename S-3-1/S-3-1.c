/*
 ============================================================================
 Name        : S-3-1.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 3-1 (VECTORES Y FUNCIONES):
 Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
 a.	Cantidad de positivos y negativos.
 b.	Sumatoria de los pares.
 c.	El mayor de los impares.
 d.	Listado de los números ingresados.
 e.	Listado de los números pares.
 f.	Listado de los números de las posiciones impares.
 Se deberán utilizar funciones y vectores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "S31biblioteca.h"
#define T 5
int main(void)
{
	setbuf(stdout, NULL);
	int puntero;
	int numeros[T];  //vector creado.
	CargarVector("ingresar numeros ENTRE -1000 a 1000", numeros, T, -1000, 1000);
	ContarPositivosNegativos(numeros, T);
	SumarPares(numeros, T, &puntero);
	MostrarMayorImpar(numeros, T);
	MostrarNumerosPares(numeros, T);
	printf("numeros ingresados\n");
	MostrarVector(numeros, T);
	//printf("acumulador de pares%d ", puntero); prueba de puntero

	return EXIT_SUCCESS;
}
