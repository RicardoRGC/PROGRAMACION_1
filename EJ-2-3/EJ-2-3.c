/*
 ============================================================================
 Name        : EJ-2-3.c
 Author      : Gonzalez Ricardo
 Ejercicio 2-3:
 Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas, de cada persona debemos obtener los siguientes datos:
 número de cliente,
 estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad( solo mayores de edad, más de 17),
 temperatura corporal (validar por favor)
 y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: El precio por pasajero es de $600.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas con estado "viudo" de más de 60 años.
 b) el número de cliente y edad de la mujer soltera más joven.
 c) cuánto sale el viaje total sin descuento.
 d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define precioViaje 600

int main(void)
{
	setbuf(stdout, NULL);
	int respuesta;
	char estadoCivil;
	int numeroCliente;
	int edadIngresada;
	int temperaturaIngresada;
	int contadorViudo60;
	int flag = 1;
	char genero;
	int solteraMasJovenEdad;
	int solteraMasJovenCliente;
	int descuento;
	int contadorViajes;
	int precioViajeSinD;
	int contadorMas60;
	int contadorMenos60;
	int calculoPorciento;
	contadorMas60 = 0;
	contadorMenos60 = 0;
	

	respuesta = 1;
	contadorViudo60 = 0;
	contadorViajes = 0;

	while (respuesta == 1)
	{
		printf("ingrese numero de cliente");
		scanf("%d", &numeroCliente);

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

		printf("ingrese ('f' para femenino, 'm' para masculino, 'o' para no binario)\n");	//genero
		fflush(stdin);	//windows
		scanf(" %c", &genero);
		genero = tolower(genero);
		while (genero != 'f' && genero != 'm' && genero != 'o')
		{
			printf("ERROR ingrese ('f' para femenino, 'm' para masculino, 'o' para no binario)\n");	//genero
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
			solteraMasJovenCliente = numeroCliente;

			flag = 0;
		}

		contadorViajes++;

		//fin
		printf("ingrese 1 para seguir\n");
		scanf("%d", &respuesta);
	}	//fin

	precioViajeSinD = precioViaje * contadorViajes;
	if (contadorMas60 > contadorMenos60)
	{

		descuento = 25;
	}
	else
	{
		descuento = 0;
	}

	calculoPorciento = precioViajeSinD - (precioViajeSinD * descuento / 100)

	/*
	 * a) La cantidad de personas con estado "viudo" de más de 60 años.
	 b) el número de cliente y edad de la mujer soltera más joven.
	 c) cuánto sale el viaje total sin descuento.
	 d) si hay más del 50% de los pasajeros que tiene más de 60 años ,
	 el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
	 * */
	//__fpurge(stdin) linux;
	//
	//caracterIngresado=tolower(caracterIngresado);// a minuscula. toupper y tolower
	printf("La cantidad de personas con estado viudo de más de 60 años %d\n"
			"el número de cliente y edad de la mujer soltera más joven.cliente %d edad %d\n  "
			"viaje total sin descuento %d $", contadorViudo60, solteraMasJovenCliente,
			solteraMasJovenEdad, precioViajeSinD);
	return EXIT_SUCCESS;
}
