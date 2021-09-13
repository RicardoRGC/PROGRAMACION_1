/*
 ============================================================================
 Name        : explicacioncadenas.c
 Author      : Gonzalez Ricardo 1-F
 Version     :
 Copyright   : setbuf(stdout, NULL);
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>

int main(void)
{
	/*char nombre[filas][columnas];//ejemplo de cadenas
	 char nombree[9]marte// se reserva mas espacio.
	 //((marta)4563), basura de mas,
	 * nombree=marta4563;
	 * nombree=marta\04563; \0 elimina basura, pero acupa un espacio.
	 * nombree=marta\0,789;
	 ///formas de inicializar;
	 char primera[]={'h','o',0}
	 char segunda[]={
	 char tersera[]

	 */
	char nombre[64];
	printf("ingrese nombre");

	scanf("%s", nombre);
	fflush(stdin);

	printf("hola %s", nombre);

	puts(""); /* prints  */
	return EXIT_SUCCESS;
}
