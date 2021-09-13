/*
 * biblioteca.c
 *
 *  Created on: 31 ago. 2021
 *      Author: gonza
 */
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int PedirEntero(char mensaje[], int min, int max)
{
	int unNumero;
	printf("%s ", mensaje);
	scanf("%d", &unNumero);

	unNumero = ValidarEntero(unNumero, min, max);
	return unNumero;
}
int ValidarEntero(int validar, int min, int max)

{
	while (validar > max || validar < min)
	{
		printf("error ingrese numero:");
		scanf("%d", &validar);
	}

	return validar;
}

