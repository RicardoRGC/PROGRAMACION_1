/*
 ============================================================================
 gonzalez Ricardo

 Ejercicio 2-4:
 Ingresar 5 caracteres e informar cuantas letras p (min�sculas) se ingresaron.
Modificador Descripci�n
%d Imprime un n�mero entero
%f Imprime un n�mero con decimales
%c Imprime un caracter
%s Imprime un array de caracteres
 ============================================================================
 */

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int main(void) {
	setbuf(stdout, NULL);

	int i;
	char caracterIngresado;
	int contadorP;

	contadorP = 0;

	for (i = 0; i < 5; i++) {
		printf("ingrese caracter\n");	//Muestra en consola.
		fflush(stdin);//windows elimina basura
		//__fpurge(stdin) linux;
		scanf(" %c", &caracterIngresado);
		caracterIngresado=tolower(caracterIngresado);// a minuscula. toupper y tolower

		if (caracterIngresado == 'p') {
			contadorP++;
		}

	}
	printf("caracter p ingresados %d\n", contadorP);


	return EXIT_SUCCESS;
}
