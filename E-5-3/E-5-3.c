/*
 ============================================================================
 Name        : E-5-3.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 5-3:
 Realizar un programa que permita el ingreso de
 10 números enteros distintos de cero.
 La carga deberá ser aleatoria
 (todos los elementos se inicializan en cero por default).
 Determinar el promedio de los positivos,
 y del menor de los negativos la suma de los antecesores
 (Según la recta numérica de los reales, hasta llegar a cero).
 Utilizar funciones y vectores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bi.h"
#define T 10

/// @return
int main(void)
{
	setbuf(stdout, NULL);
	int acumuladorPositivo;
	int contadorPositivos;
	float promediopositivos;
	int MinimoNegativo;

	int numeros[T];
	//numeros[1] = 77; //  guarda 77 en la posicion 1
//	numeros[0] = 88;  // guarda 88 en la posicion 0

	CargarVector("ingrese numero", numeros, T);
	acumuladorPositivo = acumuladorPositivosNegativos(numeros, T);
	contadorPositivos = contadorPositivosNegativos(numeros, T);
	promediopositivos = PromedioFuncion(acumuladorPositivo, contadorPositivos);
	printf("promedio positivos %.2f\n", promediopositivos);
	MinimoNegativo = numeroMinimoNegativo(numeros, T);
	printf("minimo negativo %d ", MinimoNegativo);
	sumaAntecesoresNegativos(MinimoNegativo);

	//MostrarVector(numeros, T);
	/*int indice;
	 for (int i = 0; i < 2; i++)        muestra indice y numero
	 {
	 printf("%d\n", numeros[i]);
	 indice = i;
	 printf("en el indice : %d\n", indice);

	 }*/

	return EXIT_SUCCESS;
}
