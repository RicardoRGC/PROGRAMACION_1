/*
 ============================================================================
 Name        : S1-2.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 1-2:
 Ingresar 5 números. Determinar cuál es el máximo y el mínimo e indicar en qué orden fue ingresado.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);
	int numero;
	int i;
	int flag;
	int flag1;
	int minimo;
	int maximo;
	int primeroMax;
	int primeroMin;
	int elPrimero;
	primeroMax = 0;
	primeroMin = 0;
	flag = 1;
	flag1 = 1;

	for (i = 0; i < 5; i++)
	{

		printf("ingrese numero");
		scanf("%d", &numero);

		if (flag == 1 || numero > maximo)
		{
			maximo = numero;
			primeroMax = i;

			flag = 0;

		}

		if (flag1 == 1 || numero < minimo)
		{
			minimo = numero;
			primeroMin = i;

			flag1 = 0;
		}
	} //fin

	if (primeroMax < primeroMin)
	{
		elPrimero = maximo;
	}
	else
	{
		elPrimero = minimo;
	}

	printf("minimo ingresado: %d\n"
			"maximo ingresado %d\n", minimo, maximo);
	printf("el primero ingresado es : %d", elPrimero);
	puts(""); /* prints setbuf(stdout, NULL); */
	return EXIT_SUCCESS;
}
