/*
 ============================================================================
 Name        : 2-33.c
 Author      : Gonzalez Ricardo
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroCliente;
	char estadoCivil;
	int edadIngresada;
	int temperaturaIngresada;
	char genero;
	int respuesta;
	int contadorMas60 = 0;
	int contadorViudo60 = 0;
	int contadorMenos60 = 0;
	int flag = 1;
	int solteraMasJovenEdad;
	//int solteraMasJovenCliente;

do
	{
	


		printf("ingrese numero de cliente\n");
	scanf("%d", &numeroCliente);
		while (numeroCliente < 0)
		{
			printf("ERROR ingrese numero de cliente\n");
			scanf("%d", &numeroCliente);
		}

	printf("ingrese estado civil 's' para soltero, 'c' para casado o 'v' viudo\n");
	fflush(stdin);	//windows
	scanf(" %c", &estadoCivil);
	estadoCivil = tolower(estadoCivil);
	while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v')
	{
		printf("ERROR ingrese estado civil 's' para soltero, 'c' para casado o 'v' viudo\n");
		fflush(stdin);	//windows
		scanf(" %c", &estadoCivil);
		estadoCivil = tolower(estadoCivil);
	}
	// edad( solo mayores de edad, más de 17)
	printf("ingrese edad\n");
	scanf("%d", &edadIngresada);
	while (edadIngresada < 18)
	{
		printf("ERROR ingrese edad\n");
		scanf(" %d", &edadIngresada);
	}
	//temperatura corporal (validar por favor)
	printf("ingrese temperatura corporal\n");
	scanf("%d", &temperaturaIngresada);
	while (temperaturaIngresada < 20 || temperaturaIngresada > 50)
	{
		printf("ERROR ingrese temperatura corporal\n");
		scanf(" %d", &temperaturaIngresada);
	}

	printf("ingrese 'f' para femenino, 'm' para masculino, 'o' para no binario\n");	//genero
	fflush(stdin);	//windows
	scanf(" %c", &genero);
	genero = tolower(genero);
	while (genero != 'f' && genero != 'm' && genero != 'o')
	{
			printf("ERROR ingrese 'f' para femenino, 'm' para masculino, 'o' para no binario\n");	//genero
		fflush(stdin);	//windows
		scanf(" %c", &genero);
		genero = tolower(genero);
	}
		if (edadIngresada > 59)	//a
		{

			contadorMas60++;
			if (estadoCivil == 'v')
			{
				contadorViudo60++;
			}

		}
		else
		{
			contadorMenos60++;
		}


		if (flag == 1 || (edadIngresada < solteraMasJovenEdad && estadoCivil == 's'))	//b
		{

			solteraMasJovenEdad = edadIngresada;
			//solteraMasJovenCliente = numeroCliente;

			flag = 0;
		}
		printf("si quiere terminar ingrese 'n' ");
		scanf("%d", respuesta);
		respuesta = tolower(respuesta);
	}	//fin

while (respuesta != 'n');

	return EXIT_SUCCESS;
}
