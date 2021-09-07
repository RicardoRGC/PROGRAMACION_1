/*
 * B-2-1.c
 *
 *  Created on: 4 sep. 2021
 *      Author: gonza
 */

#include "biblioteca.h"

int celsius_A_fahrenheit(int num)
{
	
}

/// @param numero: se compara si es positivo o negativo y se iguala a 0.
/// @return numero para validar 0 si es cero, 1 si es positivo , -1 negativo
int ingresarEntero(int numero) // coup
{
	int numeroIngresado;
	if (numero == 0)
	{
		numeroIngresado = 0;
	}
	else
	{
		if (numero < 0)
		{
			numeroIngresado = -1;
		}
		else
		{
			numeroIngresado = 1;
		}
	}
	
	return numeroIngresado;
}
/// @param num1 se divide por num2 para hallar el promedio
/// @param num2
/// @return promedio de numeros ingresados
float CalculoPromedio(int num1, int num2)
{
	float promedio;
	
	promedio = num1 / num2;
	
	return promedio;
}
