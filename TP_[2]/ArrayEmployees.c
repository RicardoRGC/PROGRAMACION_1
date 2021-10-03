/*
 * ArrayEmployees.c
 *
 *  Created on: 26 sep. 2021
 *      Author: riky
 */
#include "ArrayEmployees.h"
#include "B.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 1000
#define TRUE 1
#define FALSE 0
void revisarResuladoAddEmployee(int resultado)
{
	if (resultado == -1)
	{
		printf("\nHubo un error al realizar las ALTAS!\n");
		printf("Error! Invalid length or NULL pointer\n");
	}/*else
	 {
	 if(resultado == 0)
	 {
	 printf("\nOK\n");
	 }
	 }*/
}

void revisarResuladoInitEmployees(int resultado)
{
	if (resultado == -1)
	{
		printf("\nHubo un error al inicializar el listado!\n");
		printf("Error! Invalid length or NULL pointer\n");
	}/*else
	 {
	 if(resultado == 0)
	 {
	 printf("\nOK\n");
	 }
	 }*/
}

int initEmployees(Employee* list, int len)
{
	int retorno;
	retorno = -1;
	if (list != NULL && len > 0)
	{
		for (int i = 0; i < len; i++)
		{
			list[i].isEmpty = TRUE;
			retorno = 0;
		}
	}

	return retorno;
}
void CargarEmpleado(Employee lista[], int tam, int contadorId)
{

	char nombre[25];
	char apellido[25];
	float salario;
	int sector;
	int resultadoAddEmployee;






	pedirCadena(apellido, "apellido", 50);
	pedirCadena(nombre, "ingrese nombre", 50);
	salario = Pedirfloat("ingrese sueldo");
	sector = PedirEntero("sector");

	resultadoAddEmployee = addEmployee(lista, tam, contadorId, nombre, apellido, salario, sector);

	revisarResuladoAddEmployee(resultadoAddEmployee);


}

int addEmployee(Employee* list, int len, int id, char name[], char lastName[], float salary,
				int sector)
{
	int resultado;
	int espacioVacio;

	resultado = -1;

	espacioVacio = BuscarPrimerEspacioVacio(list, len);

	if (list != 0 && (len > 0 && len < 1001) && espacioVacio != -1)
	{
		list[espacioVacio].id = id;
		strcpy(list[espacioVacio].name, name);
		strcpy(list[espacioVacio].lastName, lastName);
		list[espacioVacio].salary = salary;
		list[espacioVacio].sector = sector;
		list[espacioVacio].isEmpty = 0;

		resultado = 0;
	}

	return resultado;
}

int BuscarPrimerEspacioVacio(Employee* lista, int tam)
{
	int espacioVacio;

	int i;

	espacioVacio = TRUE;

	for (i = 0; i < tam; i++)
	{
		if (lista[i].isEmpty == TRUE)
		{
			espacioVacio = i;
			break;
		}
	}

	return espacioVacio;
}

int estadoDeLista(Employee* lista, int tam)
{
	int estado;

	estado = -1;
	for (int i = 0; i < tam; i++)
	{
		if (lista[i].isEmpty == TRUE)
		{
			estado = 0;
		}
	}
	return estado;
}

void MostrarEmpleado(Employee list)
{
	printf("%d %s %s %.2f %d %d \n", list.id, list.name, list.lastName, list.salary, list.sector,
					list.isEmpty);
}
void printEmployees(Employee* lista, int largo)
{
	
	for (int i = 0; i < largo; i++)
	{
		if ((lista != NULL && largo > 0) && (lista[i].isEmpty == FALSE))
		{
			MostrarEmpleado(lista[i]);
		}
		
	}
}
/*
 * int findEmployeeById(Employee list, int len, int id)
 {

 return
 }

 */

