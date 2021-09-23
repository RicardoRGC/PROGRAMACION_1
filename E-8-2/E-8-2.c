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
#include "B.h"
#include "eProductos.h"

#define EEUU 1
#define CHINA 2
#define OTRO 3
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4
#define TAM 4
#define CARGADO 1
#define VACIO 0

int main(void)
{
	setbuf(stdout, NULL);
	char validar[5];
	int opcion;
	int N;
	//InicializarListaProductos(listaDeProductos, TAM);
	eProductos listaDeProductos[TAM] = { { 1, "Iphone 13 Pro", EEUU, IPHONE, 1000, CARGADO }, { 2,
					"Ipad 5", CHINA, IPAD, 500, CARGADO }, { 3, "Mac Air Book", OTRO, MAC, 1200, CARGADO }, {
					4, "Mag safe", EEUU, ACCESORIOS, 250, CARGADO } };

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

			pedirCadena(validar, "ingrese opcion \n", TAM);

			N = ValidarCharNumeroEntero(validar, TAM);
		}
		while (N == 0);
		opcion = atoi(validar);
		switch (opcion)
		{
		case 1:
			cargaDePROductos(listaDeProductos, TAM);
			break;
		case 2:
			BajaProducto(listaDeProductos, TAM);
			break;
		case 3:
			//MODIFICACIÓN
			ModificacionProducto(listaDeProductos, TAM);
			break;
		case 4:
			MostrarListaProductos(listaDeProductos, TAM);
			break;
		case 5:
			//ordenar precio
			OrdenarNumeros(listaDeProductos, TAM);
			MostrarListaProductos(listaDeProductos, TAM);
			break;
		case 6:
			printf("66");
			break;

		}
	}
	while (opcion != 7);

	return 0;
}

