/*
 ============================================================================
 Name        : E-6-3.c
 Author      : Gonzalez Ricardo 1-F
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//biblioteca
void pedirCadena(char cadena[], char mensaje[], int tam);

int main(void)
{
	setbuf(stdout, NULL);
	char nombre[25] = "riky";
	char apellido[25] = "GONZALEZ ";
	char apellidoNombre[51] = "";
	pedirCadena(apellido, "ingrese apellido", 25);
	pedirCadena(nombre, "ingrese nombre", 25);

	strcpy(apellidoNombre, apellido);
	strcat(apellidoNombre, " ");
	strcat(apellidoNombre, nombre);
	strlwr(apellidoNombre); //a minuscula
	puts(apellidoNombre);

	apellidoNombre[0] = toupper(apellidoNombre[0]);

	for (int i = 0; i < strlen(apellidoNombre); i++)
	{
		if (apellidoNombre[i] == ' ') // isscape(apellidoNombre[i])
		//

		{
			apellidoNombre[i + 1] = toupper(apellidoNombre[i + 1]);
		}

	}
	puts(apellidoNombre);

	return EXIT_SUCCESS;
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
	strncpy(cadena, auxstring, 24);

}

