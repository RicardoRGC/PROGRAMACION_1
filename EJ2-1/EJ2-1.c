/*
 ============================================================================
 Gonzalez Ricardo

 Ejercicio 2-1:
 Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
 Ejemplo 1:  3 - 5 - 7 - 9 - 1
 Ejemplo 2:  2 - 1 - 8 -1 - 2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ingreso 5 //forma de definir, no ocupa memoria.
//const = ocupa memoria.

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	float promedio;
	int acumulador;
	int i;
	//const int ingreso=5;
	acumulador = 0;

	for (i = 0; i < ingreso; i++) {
		printf("ingrese numero\n"); //Muestra en consola.

		scanf("%d", &numero);

		acumulador =acumulador + numero;

	}

	promedio =  (float)acumulador / i;

	printf("promedio de los numeros es %f\n", promedio);

	return EXIT_SUCCESS;
}
