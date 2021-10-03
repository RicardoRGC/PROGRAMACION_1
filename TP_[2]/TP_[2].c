/*
 ============================================================================
 Name        : TP_[2].c
 Author      : Gonzalez Ricardo Celso
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "B.h"
#include "ArrayEmployees.h"
#define TAM 1000
#define TRUE 1
#define FALSE 0






int main(void)
{

	setbuf(stdout, NULL);
	int opcion;

	Employee list[TAM] =

	{
	{ 0, "r", "g", 100, 5, 0 } };
	int contadorId;
	int idd;
	contadorId = 0;

	int CargaIsEmpty;
	int estado;
	//int carga;

	CargaIsEmpty = initEmployees(list, TAM);
	if (CargaIsEmpty == 0)
	{
		printf("carga correcta \n");
}
else
{
		printf("Error en carga \n");
}

	do
	{
		printf(
						"1. ALTAS \n2. MODIFICAR \n3. BAJA\n4. INFORMAR \n\n 0. Salir\n");
		opcion = PedirEntero("Ingrese una opcion: ");
		switch (opcion)
		{
		case 1:
			estado = estadoDeLista(list, TAM);
				contadorId++;


				if (estado)
			{

				printf("imposible");

			}
			else
			{
					CargarEmpleado(list, TAM, contadorId);
						printf("carga exitosa\n");





			}




			break;
		case 2:

			break;
		case 3:

			break;

		case 4:
			printEmployees(list, TAM);
			break;

		case 5:

			break;
		}

	}
	while (opcion != 0);

	puts("RIKY"); /* prints  */
	return EXIT_SUCCESS;
}


