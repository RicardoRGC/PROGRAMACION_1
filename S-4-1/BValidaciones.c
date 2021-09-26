/*
 * B.c
 *
 *  Created on: 21 sep. 2021
 *      Author: riky
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "B.h"
#include "eProductos.h"

int ValidarCharNumeroEntero(char numero[], int tam) {
	int bandera = 1;
	int auxstr;
	auxstr = strlen(numero);
	int i;

	if (numero[0] == '-'&& auxstr!=1 || isdigit(numero[0])) {

		for (i = 1; i < auxstr; i++)
		{

			if (!(isdigit(numero[i])))

			{

				printf("error ingrese numero entero\n");
				system("pause");
				//	return 0;
				bandera = 0;
				break;

			}

		}

	}
	else
	{

		bandera = 0;
	}

	return bandera;
}
void ValidarTamCadena(char auxstring[], char cadena[], char mensaje[], int tam)
{


	while (strlen(auxstring) > tam - 1)
	{

		printf(" \n ERROR supero numero de caracteres reingrese :");

		fflush(stdin);
		gets(auxstring);
	}
	strncpy(cadena, auxstring, tam);
}
int validarDecimal(float flotante)
{
	int ent = flotante;
	int N;

	if (flotante - ent)
	{
		N = 0;
	}
	else
	{
		N = 1;
	}
	return N;
}
