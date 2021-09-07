/*
 ============================================================================
 Gonzalez Ricardo

 Ejercicio 2-2:
 Ingresar 10 números enteros, distintos de cero. Mostrar:
 Cantidad de pares e impares.
 El menor número ingresado.
 De los pares el mayor número ingresado.
 Suma de los positivos.
 Producto de los negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//tolower.

int main(void)
{
	setbuf(stdout, NULL);

	int numero;
	int menorNumero;
	int numerosParesMayor;
	int sumaPositivos;
	int contadorNegativos;
	int sumaNegativos;
	int contadorImpares;
	int contadorPares;
	int productoNegativos;
	int i;
	int flag;
	flag = 1;

	contadorPares = 0;
	contadorImpares = 0;
	contadorNegativos = 0;
	sumaPositivos = 0;
	sumaNegativos = 0;

	for (i = 0; i < 2; i++)
	{
		printf("ingrese numero\n");	//Muestra en consola.

		scanf("%d", &numero);

		while (numero == 0)
		{
			printf("ERROR ingrese numero\n");	//Muestra en consola.

			scanf("%d", &numero);
		}

		if (numero % 2 == 0)
		{

			if (flag == 1 || numero > numerosParesMayor)
			{
				numerosParesMayor = numero;
			}
			contadorPares++;

		}
		else
		{
			contadorImpares++;
		}

		if (i == 0 || numero < menorNumero)
		{
			menorNumero = numero;
		}
		if (numero > 0)
		{
			sumaPositivos = sumaPositivos + numero;
		}
		else
		{
			contadorNegativos++;
			sumaNegativos = numero + sumaNegativos;
		}

	}	//FIN
	productoNegativos = sumaNegativos * contadorNegativos;

	printf("cantidad de numeros pares es %d \n"
			"la cantidad de numeros impares %d\n"
			"menor numero es %d\n"
			"mayor numero ingresado de pares %d\n"
			"la suma de los positivos %d\n"
			"producto de los negativos %d\n",

	contadorPares, contadorImpares, menorNumero, numerosParesMayor, sumaPositivos, productoNegativos);
	
	return EXIT_SUCCESS;
}
