/*
 ============================================================================
 Name        : Practicas.c
 Author      : Gonzalez Ricardo 1-F

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//declaracion de la funcion(prototipo-firma"de la funcion")
//que devuelve, como se llama, y q recibe.
//que devuelve(int-float-char-void) - como se llama (verboSustantivo)
//- que recibe(argumento->parametro)
// lifo ueps forma q se maneja MRam(ultimo entrado 1? salido)

//1 declaraciom de la funcion (firma-prototipo)
//2 implementacion o desarrollo
//parametros formales
//parametros formales
int sumarDosNumeros(int UnNumero, int otroNumero);
int main(void)
{
	setbuf(stdout, NULL);

	int suma;
	int acum;
	acum = 1;

	suma = sumarDosNumeros(6, 9); // llamada a la funcion
	// 6 y 9  parametros actuales

	acum = sumarDosNumeros(acum, 10);
	printf("resultado %d\n"
			"acum : %d", suma, acum);
	return EXIT_SUCCESS;
}

int sumarDosNumeros(int UnNumero, int otroNumero)	//parametros formales
{
	//scope de la funcion
	int resultado;
	resultado = UnNumero + otroNumero;

	return resultado; //retorna un  int
}
