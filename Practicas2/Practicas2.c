/*
 ============================================================================
 Name        : Practicas2.c
 Author      : Gonzalez Ricardo 1-F
 Version     :
 Copyright   : setbuf(stdout, NULL);
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int PedirEntero(char mensaje[]);
typedef struct
{
	// campos atributos
	int legajo;
	int edad;
	float nota;
	char nombre[50];
} eAlumnos;

int main(void)
{
	eAlumnos miAlumno = { 1000, 25, 10, "juan" };

	miAlumno.legajo = PedirEntero("ingrese legajo");
	miAlumno.edad = PedirEntero("edad");
	getString(miAlumno.nombre, "ingrese nombre", 50);
	getS

	return EXIT_SUCCESS;
}
int PedirEntero(char mensaje[])
{

	int entero;
	printf("%s", mensaje);
	scanf("%d", &entero);
	//entero = ValidarEntero(entero, min, max);

	return entero;
}
