/*
 * bi.c
 *
 *  Created on: 11 sep. 2021
 *      Author: gonza
 */

#include "bi.h"
#include <stdio.h>
#include <stdlib.h>

void MostrarNumerosImpares(int p[], int tam)
{
	int i;
	int pares;

	for (i = 0; i < tam; i++)
	{
		pares = DeterminarParidad(i);
		if (pares == 0)
		{

			printf("numeros en indice impares:");
			printf(" %d\n", p[i]);

		}
	}
}
void MostrarNumerosPares(int p[], int tam)
{
	int i;
	int pares;
	for (i = 0; i < tam; i++)
	{
		pares = DeterminarParidad(p[i]);
		if (pares == 1)
		{
			printf("numeros pares:");
			printf(" %d\n", p[i]);
		}
	}
}
int DeterminarParidad(int paridad)
{
	int Pares;

	Pares = 0;
	//printf("parida %d", paridad);
	if (paridad % 2 == 0)
	{
		Pares = 1;
	}
	else
	{
		Pares = 0;
	}

	return Pares;
}
void MostrarMayorImpar(int p[], int tam)
{
	int impar;

	int mayorImpar;

	for (int i = 0; i < tam; i++)
	{

		impar = DeterminarParidad(p[i]);

		if (impar == 0)
		{
			if (i == 0 || p[i] > mayorImpar)
			{
				mayorImpar = p[i];

			}

		}
	}

	printf("mayor impar es %d\n", mayorImpar);

}
void SumarPares(int p[], int tam)
{
	int pares;

	int acumulador = 0;

	for (int i = 0; i < tam; i++)
	{

		pares = DeterminarParidad(p[i]);

		if (pares == 5)
		{
			acumulador += p[i];
		}

	}
	if (pares == 5)
	{
		printf("la suma de pares %d\n ", acumulador);
	}

}

int DeterminarSigno(int signo)
{
	int determinar = 0;

	if (signo < 0)
	{
		determinar = -1;
	}
	else
	{

		if (signo > 0)
		{
			determinar = 1;
		}
	}
	return determinar;
}
void ContarPositivosNegativos(int p[], int tam)
{
	int positivosNegativos;
	int contadorNegativo = 0;
	int contadorPositivo = 0;

	for (int i = 0; i < tam; i++)
	{
		positivosNegativos = p[i];

		positivosNegativos = DeterminarSigno(positivosNegativos);
		if (positivosNegativos == -1)
		{
			contadorNegativo++;
		}
		else if (positivosNegativos == 1)
		{
			contadorPositivo += positivosNegativos;
		}
	}
	printf("cantidad de negativos %d\n"
					"contador de positivos %d\n", contadorNegativo, contadorPositivo);
}
void MostrarVector(int p[], int tam)
{

	for (int i = 0; i < tam; i++)
	{
		printf("%d\n", p[i]);
	}
}
void CargarVector(char mensaje[], int p[], int tam, int min, int max)
{
	int i;
	for (i = 0; i < tam; i++)
	{
		p[i] = PedirEntero(mensaje, min, max);

	}
}
int PedirEntero(char mensaje[], int min, int max)
{
	int entero;
	printf("%s", mensaje);
	scanf("%d", &entero);
	entero = ValidarEntero(entero, min, max);

	return entero;
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
