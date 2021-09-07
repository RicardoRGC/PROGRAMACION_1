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
#include <ctype.h>//biblioteca

void ValidarNumero(int);
int main(void)
{

	setbuf(stdout, NULL);

	int opcion;
	int numeroUno;
	int numeroDOS;
	int flagOperandoUno;
	int flagOperandoDOS;

	flagOperandoUno = 1;
	flagOperandoDOS = 1;

	do
	{
		if (flagOperandoUno == 1)
		{
			printf("1. Ingresar 1er operando A=x\n");

		}
		else
		{
			printf("1. Ingresar 1er operando A=%d\n", numeroUno);
		}
		if (flagOperandoDOS == 1)
		{
			printf("2. Ingresar 2do operando B=x\n");
		}
		else
		{
			printf("2. Ingresar 1do operando B=%d\n", numeroDOS);
		}

		printf("3. Calcular todas las operaciones	\n");
		printf("4. informar resultados");
		printf("5 SALIR: ");
		scanf("%d", &opcion);
		switch (opcion)
		//int - char
		{
		case 1:
			printf("\n Ingrese el primer operando: ");
			scanf("%d", &numeroUno);
			ValidarNumero(numeroUno);
			flagOperandoUno = 0;
			break;

		case 2:
			if (flagOperandoUno == 1)
			{
				printf("por favor ingrese el primer operando\n");

			}
			else
			{
				printf("\n Ingrese el 2do operando: \n");
				scanf("%d", &numeroDOS);
				flagOperandoDOS = 0;

			}

			break;
		case 3:
			if (flagOperandoUno == 1)
			{
				printf("por favor ingrese el primer operando\n");

			}
			break;
		case 4:
			if (flagOperandoUno == 1)
			{
				printf("por favor ingrese el primer operando\n");

			}

			break;
		case 5:
			printf("Gracias hasta luego");

			break;

		default:

			printf("\n"
							"no ingreso caracter Correcto\n"
							"\n");

			break;

		}

	}
	while (opcion != 5);

	return 0;
}

void ValidarNumero(int num)
{
	int V = 0;
	while (V == 0)
	{
		if (isdigit(num))
		{
			V = V + 1;
			break;
		}
		else
		{
			printf("Ingrese un numero valido");
			
		}
	}
}
