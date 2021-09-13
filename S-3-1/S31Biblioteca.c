/*
 * S31Biblioteca.c
 *
 *  Created on: 11 sep. 2021
 *      Author: gonza
 */

#include "S31biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
void MostrarNumerosPares(int p[], int tam)
{
	int i;
	int pares;
	for (i = 0; i < tam; i++)
	{
		pares = DeterminarParidad(p[i]);
		if (pares == 2)
		{
			printf("numeros pares:");
			printf(" %d\n", p[i]);
		}
	}
}
int DeterminarParidad(int paridad)
{
	int ParesImpar;

	ParesImpar = 0;
	if (paridad != 0)
	{
		if (paridad % 2 == 0)
		{
			ParesImpar = 2;
		}
		else
		{
			ParesImpar = 1;
		}
	}

	return ParesImpar;
}
void MostrarMayorImpar(int p[], int tam)
{
	int impar;
	int flag = 1;

	int mayorImpar;

	for (int i = 0; i < tam; i++)
	{

		impar = DeterminarParidad(p[i]);
		//printf("devolucion paridad en impar %d\n", impar);

		if (impar == 1)
		{
			if (i == 0 || p[i] > mayorImpar)
			{
				mayorImpar = p[i];
				flag = 0;
				//printf("mayor impar proceso %d\n", mayorImpar);
			}

		}
	}
	if (flag == 0)
	{
		printf("mayor impar es %d\n", mayorImpar);
	}

}
void SumarPares(int p[], int tam, int *refereciaPuntero)
{
	int pares;

	int acumulador = 0;

	for (int i = 0; i < tam; i++)
	{

		pares = DeterminarParidad(p[i]);

		if (pares == 2)
		{
			acumulador += p[i];
		}

	}
	if (pares == 2 && acumulador != 0)
	{
		printf("la suma de pares %d\n ", acumulador);
	}
	*refereciaPuntero = acumulador;
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
					"cantidad de positivos %d\n", contadorNegativo, contadorPositivo);
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
