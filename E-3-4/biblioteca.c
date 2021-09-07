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
	while (unNumero < min || unNumero > max)
	{
		printf("%s ", mensaje);
		scanf("%d", &unNumero);
	}

	return unNumero;
}
