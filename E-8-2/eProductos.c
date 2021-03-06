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
#define TAM 5
#define CARGADO 1
#define VACIO 0
void OrdenarPorCaracter(eProductos lista[], int tam)
{

	float auxFlotante;
	int auxentero;
	char auxstring[50];

	for (int i = 0; i < tam - 1; i++)
	{
		for (int j = i + 1; j < tam; j++)
		{
			if (strcmp(lista[i].descripcion, lista[j].descripcion) > 0) //menor a mayor A-Z (<=Z-A)
			{
				auxFlotante = lista[i].precio;
				lista[i].precio = lista[j].precio; // intercambian valores
				lista[j].precio = auxFlotante;

				auxentero = lista[i].idProducto;
				lista[i].idProducto = lista[j].idProducto; // intercambian valores
				lista[j].idProducto = auxentero;

				auxentero = lista[i].nacionalidad;
				lista[i].nacionalidad = lista[j].nacionalidad; // intercambian valores
				lista[j].nacionalidad = auxentero;

				auxentero = lista[i].tipo;
				lista[i].tipo = lista[j].tipo; // intercambian valores
				lista[j].tipo = auxentero;

				auxentero = lista[i].estado;
				lista[i].estado = lista[j].estado; // intercambian valores
				lista[j].estado = auxentero;

				strcpy(auxstring, lista[i].descripcion);
				strcpy(lista[i].descripcion, lista[j].descripcion);
				strcpy(lista[j].descripcion, auxstring);

			}
		}
	}
}
/// @param lista
/// @param tam
void OrdenarNumeros(eProductos lista[], int tam)
{

	float auxFlotante;
	int auxentero;
	char auxstring[50];

	for (int i = 0; i < tam - 1; i++)
	{
		for (int j = i + 1; j < tam; j++)
		{
			if (lista[i].precio > lista[j].precio) //criterio de ordenamiento ordena de mayor a menor
			{
				auxFlotante = lista[i].precio;
				lista[i].precio = lista[j].precio; // intercambian valores
				lista[j].precio = auxFlotante;

				auxentero = lista[i].idProducto;
				lista[i].idProducto = lista[j].idProducto; // intercambian valores
				lista[j].idProducto = auxentero;

				auxentero = lista[i].nacionalidad;
				lista[i].nacionalidad = lista[j].nacionalidad; // intercambian valores
				lista[j].nacionalidad = auxentero;

				auxentero = lista[i].tipo;
				lista[i].tipo = lista[j].tipo; // intercambian valores
				lista[j].tipo = auxentero;

				auxentero = lista[i].estado;
				lista[i].estado = lista[j].estado; // intercambian valores
				lista[j].estado = auxentero;

				strcpy(auxstring, lista[i].descripcion);
				strcpy(lista[i].descripcion, lista[j].descripcion);
				strcpy(lista[j].descripcion, auxstring);

			}
		}
	}
}

void ModificacionProducto(eProductos listaProductos[], int tam)
{
	int entero;
	MostrarListaProductos(listaProductos, TAM);
	entero = PedirEntero("\n ingrese id de producto a modificar");

	for (int i = 0; i < tam; i++)
	{
		if (listaProductos[i].estado == CARGADO && listaProductos[i].idProducto == entero)
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
	int id;
	MostrarListaProductos(listaProductos, TAM);
	id = PedirEntero("\n ingrese id de producto");
	MostrarListaProductos(listaProductos, TAM);

	for (int i = 0; i < tam; i++)
	{
		if (listaProductos[i].estado == CARGADO && listaProductos[i].idProducto == id)
		{
			listaProductos[i].estado = VACIO;

			break;
		}

	}

}

void MostrarProducto(eProductos producto)
{

	printf("%2d %10s %6d %8d %10.2f\n", producto.idProducto, producto.descripcion,
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
void InicializarListaProductos(eProductos listaProductos[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		listaProductos[i].estado = VACIO;
	}
}
int estadoDeLista(eProductos lista[], int tam)
{
	int estado;
	estado = 0;
	for (int i = 0; i < tam; i++)
	{
		if (lista[i].estado == VACIO)
		{
			estado++;
		}
	}
	return estado;
}
void ValidarRepedito(eProductos lista[], int id, int tam)
{
	for (int j = 0; j < tam; j++)
	{

		while (id == lista[j].idProducto)
		{

			id = PedirEntero("\n"
							"\n ingrese id de producto que no sea igual:");

		}
	}
}
void cargaDePROductos(eProductos lista[], int tam)
{
	int id;
	int estado;
	estado = estadoDeLista(lista, tam);

	if (estado > 0)
	{
		for (int i = 0; i < tam; i++)
		{
			if (lista[i].estado == VACIO)
			{

				//lista[i].idProducto = PedirEntero("\ningrese id de producto");

				id = PedirEntero("\ningrese id de producto");

				ValidarRepedito( lista,id, tam);

				lista[i].idProducto = id;

				pedirCadena(lista[i].descripcion, "ingrese descripcion", 50);

				lista[i].nacionalidad = PedirEntero("1 EEUU - 2 CHINA - 3 OTRO");
				lista[i].tipo = PedirEntero("1 IPHONE -2 MAC -3 IPAD -4 ACCESORIOS");
				lista[i].precio = Pedirfloat("ingrese precio");
				lista[i].estado = CARGADO;

			}
			break;

		}

	}
	else
	{
		printf("-----------------------\n"
						"la lista esta llena.\n"
						"-----------------------\n");
	}

}
int PedirEntero(char mensaje[])
{
	int entero;
	char numero[50];

	printf("%s", mensaje);
	scanf("%s", numero);
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

void pedirCadena(char cadena[], char mensaje[], int tam) //int cantidadIntentos
{

	char auxstring[1000];

	printf(mensaje);
	fflush(stdin);
	gets(auxstring);
	ValidarTamCadena(auxstring, cadena, mensaje, tam);

}
float Pedirfloat(char mensaje[])
{
	float flotante;
	printf(mensaje);
	scanf("%f", &flotante);
	return flotante;
}

