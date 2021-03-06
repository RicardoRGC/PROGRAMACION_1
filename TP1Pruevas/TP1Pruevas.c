/*
 ============================================================================
 Name        : TP1Pruevas.c

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
#include <ctype.h>
#include <string.h>
#include "tp1bibliotecaP.h"

int main(void)
{

	setbuf(stdout, NULL);

	int opcion;
	int sumaUno;
	int restaUno;
	int n;
	float divisionUno;
	int factorizacionUno;
	int factorizacionDos;
	int multiplicacionUno;
	int numeroUno;
	int numeroDOS;
	int flagOperandoUno;
	int flagOperandoDOS;
	int flagCalculos;
	char validacion[5];

	flagCalculos = 1;
	flagOperandoUno = 1;
	flagOperandoDOS = 1;

	do
	{
		if (flagOperandoUno == 1)
		{
			printf("\n"
							"\n"
							"\n1. Ingresar 1er operando A=x\n");

		}
		else
		{
			printf("\n"
							"\n"
							"\n"
							"1. ingresado A=%d\n", numeroUno);

		}
		if (flagOperandoDOS == 1)
		{
			printf("2. Ingresar 2do operando B=x\n");
		}
		else
		{
			printf("2. ingresado B=%d\n", numeroDOS);
		}

		if (flagCalculos == 1)
		{
			printf("3. Calcular todas las operaciones	\n");
		}
		else
		{
			printf("3. Calculos resueltos	\n");

		}

		printf("4. informar resultados \n");
		printf("5. SALIR: "
						"\n"
						"\n");

		scanf("%d", &opcion);
		switch (opcion)
		//int - char
		{
		case 1:

			do
			{
				printf("\n ingrese primer operando\n");
				scanf("%s", validacion);
				n = ValidarNumero(validacion);

			}
			while (n == 0);
			numeroUno = atoi(validacion);

			flagOperandoUno = 0;
			break;

		case 2:
			if (flagOperandoUno == 1)
			{
				printf(
								"\n"
												"\n"
												"\n"
												"por favor ingrese el primer operando para continuar"
												"\n");

				system("pause");

			}
			else
			{
				do
				{
					printf("\n ingrese segundo operando\n"); // validacion del segundo
					scanf("%s", validacion);
					n = ValidarNumero(validacion);

				}
				while (n == 0);
				numeroDOS = atoi(validacion);
				flagOperandoDOS = 0;

			}

			break;
		case 3:
			if (flagOperandoUno == 1 || flagOperandoDOS == 1)
			{
				printf(
								"\n"
												"por favor ingrese los operando para continuar\n"
												"\n");
				system("pause");

			}
			else
			{

				sumaUno = Sumar1(numeroUno, numeroDOS);  // suma.
				restaUno = calcularResta(numeroUno, numeroDOS); // division.
				multiplicacionUno = calcularMultiplicacion(
								numeroUno, numeroDOS); // multiplicacion
				divisionUno = calcularDiv(numeroUno, numeroDOS); //division
				factorizacionUno = calcularFactorial(numeroUno); // fatorial numeroUNO
				factorizacionDos = calcularFactorial(numeroDOS); // fatorial numeroDOS

				flagCalculos = 0;

			}
			break;
		case 4:
			if (flagOperandoUno == 1 || flagOperandoDOS == 1)
			{
				printf(
								"\n"
												"por favor ingrese los operando para continuar\n"
												"\n");
				system("pause");
			}

			if (flagCalculos == 1)
			{
				printf(
								"\n"
												"por favor realizar calculos para continuar\n"
												"\n");
				system("pause");
			}
			else

			{
				printf("El resultado de %d+%d es: %d\n"
								"El resultado de %d-%d es: %d\n"
								"El resultado de %d*%d es: %d\n", numeroUno,
								numeroDOS, sumaUno, numeroUno, numeroDOS,
								restaUno, numeroUno, numeroDOS,
								multiplicacionUno);
				if (divisionUno == 'N')
				{
					printf("no se puede dividir por cero\n");
				}
				else
				{
					printf("El resultado de %d/%d es: %.2f\n",
									numeroUno, numeroDOS, divisionUno);
				}

				printf(
								"El factorial de %d es: %d y El factorial de %d es: %d \n",
								numeroUno, factorizacionUno, numeroDOS,
								factorizacionDos);

				system("pause");
			}

			break;
		case 5:
			printf("Gracias hasta luego");
			
			break;
			
		default:

			printf("\n"
							"no ingreso caracter Correcto\n"
							"\n");
			system("pause");
			
			break;
			
		}
		
	}
	while (opcion != 5);
	
	return 0;
}

