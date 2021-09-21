/*
 ============================================================================
 Name        : E-8-2.c
 Author      : Gonzalez Ricardo 1-F
 Version     :
 Copyright   :
 Ejercicio 8-2:
 Una empresa importadora que comercializa productos Apple,
 decide registrar de sus productos los siguientes datos:

 idProducto (numerico)

 descripcion (alfanumérico)

 nacionalidad (numérico, por el momento utilizaremos un
 define: EEUU - CHINA - OTRO)

 tipo (numérico, por el momento utilizaremos un
 define: IPHONE -MAC - IPAD - ACCESORIOS)

 precio (numérico decimal)

 Realizar un programa que permita interactuar
 con un menú de usuarios con las siguientes opciones:
 ALTA Producto: Se ingresan los datos de UN solo producto.
 Siempre y cuando haya espacio disponible en el array.
 BAJA Producto: A partir del ingreso del ID.
 Si existe el producto desaparece de la lista,
 dejando espacio disponible para un nuevo producto.
 MODIFICACIÓN Producto: A partir del ingreso del ID.
 Si existe se podrá modificar el precio o el tipo.
 LISTADO Productos.
 LISTADO ordenado por precio.
 LISTADO ordenado por descripción.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblioteca-progrmacion1.h"

#define EEUU 1
#define CHINA 2
#define OTRO 3
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4
#define TAM 2
#define CARGADO 1
#define VACIO 0
void pedirCadena(char cadena[], char mensaje[], int tam);
float PedirNumeros(char mensaje[], float flotante);
int validarDecimal(float flotante);
int ValidarNumeroEntero(char numero[]);
typedef struct
{
	int idProducto;
	char descripcion[50];
	int nacionalidad;
	int tipo;
	float precio;

} eProductos;

int main(void)
{
	setbuf(stdout, NULL);
	char validar[5];
	int opcion;
	int N;

	do
	{
		do
		{

			printf("1.ALTA\n"
							"2.BAJA\n"
							"3.MODIFICACION\n"
							"4 LISTADO Productos.\n"
							"5.LISTADO ordenado por precio.\n"
							"6.LISTADO ordenado por descripción.\n"
							"7.SALIR\n");

			pedirCadena(validar, "ingrese opcion \n", 5);

			N = ValidarNumeroEntero(validar);
		}
		while (N == 0);
		opcion = atoi(validar);
		switch (opcion)
		{
		case 1:

			break;
		case 2:
			printf("22");
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			printf("66");
			break;

		}
	}
	while (opcion != 7);

	return 0;
}
int ValidarNumeroEntero(char numero[])
{
	int bandera = 1;

	int i;

	for (i = 0; i < strlen(numero); i++)
	{
		if (!(isdigit(numero[i]))) //5.55

		{

			printf("error ingrese numero entero\n");

			//	return 0;
			bandera = 0;

		}

	}

	return bandera;
}
void pedirCadena(char cadena[], char mensaje[], int tam) //int cantidadIntentos
{

	char auxstring[1000];

	printf(mensaje);
	fflush(stdin);
	gets(auxstring);
	//strncpy(nombre,25,aux)

	while (strlen(auxstring) > tam - 1)
	{
		printf(" ERROR ingrese nombre");
		fflush(stdin);
		gets(auxstring);
	}
	strncpy(cadena, auxstring, 5);
}
float PedirNumeros(char mensaje[], float flotante)
{

	printf(mensaje);
	scanf("%f", &flotante);
	return flotante;
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

