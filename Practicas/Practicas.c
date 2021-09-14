/*
 ============================================================================
 Name        : Practicas.c
 Author      : Gonzalez Ricardo 1-F
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
 a) Calcular la suma (A+B)
 b) Calcular la resta (A-B)
 c) Calcular la division (A/B)
 d) Calcular la multiplicacion (A*B)
 e) Calcular el factorial (A!)




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

	return 0;
}

void pedirCadena(char cadena[], char mensaje[], int tam) //int cantidadIntentos
{

//24+24 +1+2=51
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

	////
	///
	///
	
}

