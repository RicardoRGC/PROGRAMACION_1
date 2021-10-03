/*
 * B.c
 *
 *  Created on: 25 sep. 2021
 *      Author: riky
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "B.h"
float Pedirfloat(char mensaje[])
{
	char flotante[5];
	int validacion;


	/*printf("%s", mensaje);
	scanf("%s", flotante);
	 fflush(stdin);*/
	printf(mensaje);
	fflush(stdin);
	gets(flotante);

	validacion = ValidarCharNumerofloat(flotante, 5);
	while(validacion==0)
	{
		printf(mensaje);
		fflush(stdin);
		gets(flotante);
		validacion = ValidarCharNumerofloat(flotante, 5);
	}
	validacion = atof(flotante);



	return validacion;
}
int PedirEntero(char mensaje[])
{
	char entero[5];
	int validacion;



	printf(mensaje);
	fflush(stdin);
	gets(entero);
	validacion = ValidarCharNumeroEntero(entero, 5);
	while(validacion==0)
	{
		printf("%s", mensaje);
		scanf("%s", entero);
		fflush(stdin);
		validacion = ValidarCharNumeroEntero(entero, 5);
	}
	validacion = atoi(entero);



	return validacion;
}


void pedirCadena(char cadena[], char mensaje[], int tam) //int cantidadIntentos
{

	char auxstring[1000];

	printf(mensaje);
	fflush(stdin);
	gets(auxstring);
	ValidarTamCadena(auxstring, cadena, mensaje, tam);

}

