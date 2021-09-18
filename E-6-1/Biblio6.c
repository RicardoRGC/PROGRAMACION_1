/*
 * Biblio6.c
 *
 *  Created on: 15 sep. 2021
 *      Author: riky
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblio6.h"
int intercambio(int num1[], int num2[], int* r)
{
	int aux;

	aux = num1[0];
	num1[0] = num2[0]; // intercambian valores
	num2[0] = aux;
	*r = num2[0];

	return num1[0];
}
