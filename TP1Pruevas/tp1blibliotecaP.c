/*
 * tp1blibliotecaP.c
 *
 *  Created on: 1 sep. 2021
 *      Author: gonza
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "tp1bibliotecaP.h"

int ValidarNumero(char numero[])
{
	int i;

	for (i = 0; i < strlen(numero); i++)
	{
		if (!(isdigit(numero[i])))
		{
			printf("\n"
							"--------------------------------------------------------------\n"
							" por favor ingrese solo numeros\n");

			return 0;
		}
	}

	return 1;
}

int Sumar1(int numeroUno, int numeroDos) //sumar
{
	int suma;
	suma = numeroUno + numeroDos;

	return suma;
}
int calcularResta(int numUNO, int numDOS)  // restar
{
	int resultadoResta;
	resultadoResta = numUNO - numDOS;
	return resultadoResta;
}

int calcularMultiplicacion(int numUNO, int numDOS)   // multiplicar
{
	int resultadoMultip;
	resultadoMultip = numUNO * numDOS;
	return resultadoMultip;
}

float calcularDiv(int numUNO, int numDOS)    // dividir
{
	float division;
	if (numDOS != 0)
	{
		division = (float) numUNO / numDOS;
	}
	else
	{
		division = 'N';
	}
	return division;
}

int calcularFactorial(int numero)    // factorial
{
	int multiplicacion;
	int i;
	i = numero - 1;
	multiplicacion = numero;
	for (; i > 1; i--)
	{
		multiplicacion = multiplicacion * i;

	}
	return multiplicacion;
}

