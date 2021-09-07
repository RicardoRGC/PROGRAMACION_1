/*
 ============================================================================
 Name        : S-1-1.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 1-1:
 Ingresar números enteros, hasta que el usuario lo decida. Calcular y mostrar:
 a)	El promedio de los números positivos.
 b)	El promedio de los números negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	char respuesta;
	int acumuladorPositivos;
	int acumuladorNegativos;
	int contadorNegativos;
	int contadorPositivos;
	float promedioNegativos;
	float promedioPositivos;
	
	contadorNegativos = 0;
	contadorPositivos = 0;
	acumuladorNegativos = 0;
	acumuladorPositivos = 0;

	do
	{
		printf("ingrese numero");
		scanf("%d", &numero);
		
		if (numero > 0)
		{
			contadorPositivos++;
			acumuladorPositivos += numero;
		}
		else
		{
			contadorNegativos++;
			acumuladorNegativos += numero;
		}



		printf("Desea continuar? s o n: ");
		fflush(stdin);
		scanf("%c", &respuesta);
		respuesta = tolower(respuesta);
	}
	while (respuesta != 'n');


	
	promedioNegativos = (float) acumuladorNegativos / contadorNegativos;
	promedioPositivos = (float) acumuladorPositivos / contadorPositivos; 


	
	printf("promedio de negativos: %.2f\n"
			"promedio de positivos: %.2f", promedioNegativos, promedioPositivos);


	return EXIT_SUCCESS;
}
