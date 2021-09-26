/*
 ============================================================================
 Name        : S-4-1.c
 Ejercicio 4-1 (Estructuras facil):
 Crear la estructura empleado con idEmpleado, nombre, sueldo y puesto (programador,
 analista, tester).
 Crear un menu con las siguientes opciones:
 1. Cargar empleados. Carga secuencial.
 2. Mostrar empleados. Ordenados por puesto.
 3. Mostrar solo los empleados analistas.
 4. Mostrar cuantos empleados tester hay.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "B.h"
#define TAM 1
typedef struct
{
	int idempleado;
	char nombre[50];
	float sueldo;
	char puesto[50];

} eEmpleado;

void MostrarEmpleado(eEmpleado miEmpleado);
void CargarEmpleados(eEmpleado lista[], int largo);
void MostrarTodosLosEmpleados(eEmpleado lista[], int largo);
eEmpleado ingreseEmpleado(void);


int main(void)
{
	setbuf(stdout, NULL);
	eEmpleado miEmpleado[TAM] ;//= { 100, "riky", 60000, "programador" };
	CargarEmpleados(miEmpleado, TAM);

	MostrarTodosLosEmpleados(miEmpleado,TAM);
	return EXIT_SUCCESS;
}
eEmpleado ingreseEmpleado(void)
{

	eEmpleado dato;
	dato.idempleado = PedirEntero("ingrese id empleado");
	pedirCadena(dato.nombre, "ingrese nombre", 50);
	dato.sueldo = Pedirfloat("ingrese el sueldo");
	pedirCadena(dato.puesto, "programador	analista tester", 50);

	return dato;

}
void MostrarEmpleado(eEmpleado miEmpleado)
{
	printf("%d %s %.2f %s \n", miEmpleado.idempleado, miEmpleado.nombre, miEmpleado.sueldo,
					miEmpleado.puesto);
}
void CargarEmpleados(eEmpleado lista[], int largo)
{
	for (int i = 0; i < largo; i++)
	{
		lista[i] = ingreseEmpleado();
	}
}
void MostrarTodosLosEmpleados(eEmpleado lista[], int largo)
{
	for (int i = 0; i < largo; i++)
	{
		MostrarEmpleado(lista[i]);
	}
}
