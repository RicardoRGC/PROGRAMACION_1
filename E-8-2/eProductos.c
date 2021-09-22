/*
 * eProductos.c
 *
 *  Created on: 22 sep. 2021
 *      Author: riky
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "eProductos.h"
#include "B.h"

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

void ModificacionProducto(eProductos listaProductos[], int tam)
{
	MostrarListaProductos(listaProductos, TAM);

	for (int i = 0; i < tam; i++)
	{
		if (listaProductos[i].estado == CARGADO
						&& listaProductos[i].idProducto == PedirEntero("\n ingrese id de producto a modificar"))
		{
			listaProductos[i].estado = VACIO;
			pedirCadena(listaProductos[i].descripcion, "ingrese descripcion", 50);
			listaProductos[i].nacionalidad = PedirEntero("1 EEUU - 2 CHINA - 3 OTRO");
			listaProductos[i].precio = Pedirfloat("ingrese precio");
			listaProductos[i].tipo = PedirEntero("1 IPHONE -2 MAC -3 IPAD -4 ACCESORIOS");
			listaProductos[i].estado = CARGADO;
			break;
		}

	}

}
void BajaProducto(eProductos listaProductos[], int tam)
{
	MostrarListaProductos(listaProductos, TAM);

	for (int i = 0; i < tam; i++)
	{
		if (listaProductos[i].estado == CARGADO
						&& listaProductos[i].idProducto == PedirEntero("\n ingrese id de producto"))
		{
			listaProductos[i].estado = VACIO;

			break;
		}

	}

}

void MostrarProducto(eProductos producto)
{

	printf("%4d %10s %4d %6d %4.2f\n", producto.idProducto, producto.descripcion,
					producto.nacionalidad, producto.tipo, producto.precio);
}

void MostrarListaProductos(eProductos listaProductos[], int tam)
{

	for (int i = 0; i < tam; i++)
	{
		if (listaProductos[i].estado == CARGADO)
		{
			MostrarProducto(listaProductos[i]);
		}

	}
}

void cargaDePROductos(eProductos lista[], int tam)
{

	for (int i = 0; i < tam; i++)
	{
		if (lista[i].estado == VACIO)
		{
			lista[i].idProducto = PedirEntero("ingrese id de producto");
			pedirCadena(lista[i].descripcion, "ingrese descripcion", 50);
			lista[i].nacionalidad = PedirEntero("1 EEUU - 2 CHINA - 3 OTRO");
			lista[i].precio = Pedirfloat("ingrese precio");
			lista[i].tipo = PedirEntero("1 IPHONE -2 MAC -3 IPAD -4 ACCESORIOS");
			lista[i].estado = CARGADO;
			break;
		}

	}
	printf("-----------------------\n"
					"la lista esta llena.\n"
					"-----------------------\n");
}
int PedirEntero(char mensaje[])
{
	int entero;
	printf("%s", mensaje);
	scanf("%d", &entero);
//entero = ValidarEntero(entero, min, max);

	return entero;
}
void inicializarProductos(eProductos lista[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		lista[i].estado = VACIO;

	}
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
	strncpy(cadena, auxstring, tam);
}
float Pedirfloat(char mensaje[])
{
	float flotante;
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
