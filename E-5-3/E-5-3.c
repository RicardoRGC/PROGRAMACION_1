/*
 ============================================================================
 Name        : E-5-3.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 5-3:
 Realizar un programa que permita el ingreso de
 10 números enteros distintos de cero.
 La carga deberá ser aleatoria
 (todos los elementos se inicializan en cero por default).
 Determinar el promedio de los positivos, y del menor de los negativos la suma de los antecesores
 (Según la recta numérica de los reales, hasta llegar a cero).
 Utilizar funciones y vectores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define T 3
int PedirEntero(char mensaje[]);
void CargarVector(char mensaje[], int p[], int tam);
int DeterminarSigno(int signo);
int acumuladorPositivosNegativos(int p[], int tam);
float PromedioFuncion(int numeroUno, int numerodos);
void MostrarVector(int p[], int tam);
int contadorPositivosNegativos(int p[], int tam);
int numeroMinimoNegativo(int p[], int tam);
void sumaAntecesoresNegativos(int negativo);

/// @return
int main(void)
{
	setbuf(stdout, NULL);
	int acumuladorPositivo;
	int contadorPositivos;
	float promediopositivos;
	int MinimoNegativo;

	int numeros[T]; // inicializa en cero.
	//numeros[1] = 77; //  guarda 77 en la posicion 1
//	numeros[0] = 88;  // guarda 88 en la posicion 0

	CargarVector("ingrese numero", numeros, T);
	acumuladorPositivo = acumuladorPositivosNegativos(numeros, T);
	contadorPositivos = contadorPositivosNegativos(numeros, T);
	promediopositivos = PromedioFuncion(acumuladorPositivo, contadorPositivos);
	printf("promedio positivos %.2f\n", promediopositivos);
	MinimoNegativo = numeroMinimoNegativo(numeros, T);
	sumaAntecesoresNegativos(MinimoNegativo);

	//MostrarVector(numeros, T);
	/*int indice;
	 for (int i = 0; i < 2; i++)        muestra indice y numero
	 {
	 printf("%d\n", numeros[i]);
	 indice = i;
	 printf("en el indice : %d\n", indice);

	 }*/

	return EXIT_SUCCESS;
}
void sumaAntecesoresNegativos(int negativo)
{
	int i;
	int sumaAntecesoresNeg;
	sumaAntecesoresNeg = 0;

	for (i = 0; i > negativo; i--)
	{
		sumaAntecesoresNeg += i;
	}
	printf("suma de antecesores negativos: %d\n", sumaAntecesoresNeg);
}
int numeroMinimoNegativo(int p[], int tam)
{
	int negativos;
	int minimoNegativo;
	for (int i = 0; i < tam; i++)
	{
		negativos = DeterminarSigno(p[i]);

		if (negativos == -1)
		{
			if (i == 0 || p[i] < minimoNegativo)
			{
				minimoNegativo = p[i];
			}
		}
	}
	return minimoNegativo;
}

float PromedioFuncion(int numeroUno, int numerodos)
{
	float promedio;
	promedio = (float) numeroUno / numerodos;

	return promedio;
}

int acumuladorPositivosNegativos(int p[], int tam)
{
	int positivosNegativos;
	int acumuladorPositivos;
	int acumuladorNegativos;
	acumuladorNegativos = 0;
	acumuladorPositivos = 0;

	for (int i = 0; i < tam; i++)
	{
		positivosNegativos = p[i];

		positivosNegativos = DeterminarSigno(positivosNegativos);
		if (positivosNegativos == -1)
		{
			acumuladorNegativos += p[i];
		}
		else if (positivosNegativos == 1)
		{
			acumuladorPositivos += p[i];
		}
	}
	return acumuladorPositivos;
}

int contadorPositivosNegativos(int p[], int tam)
{
	int positivosNegativos;
	int contadorNegativo = 0;
	int contadorPositivo = 0;

	for (int i = 0; i < tam; i++)
	{
		positivosNegativos = p[i];

		positivosNegativos = DeterminarSigno(positivosNegativos);
		if (positivosNegativos == -1)
		{
			contadorNegativo++;
		}
		else if (positivosNegativos == 1)
		{
			contadorPositivo++;
		}

	}

	return contadorPositivo;
}

int DeterminarSigno(int signo)
{
	int determinar = 0;

	if (signo < 0)
	{
		determinar = -1;	//negativos
	}
	else
	{

		if (signo > 0)
		{
			determinar = 1;	//positivos
		}
	}
	return determinar;
}
/// @param p
/// @param tam
void MostrarVector(int p[], int tam) //Recorre y muestra el vector
{

	for (int i = 0; i < tam; i++)
	{

		printf(" %d ", p[i]);
	}
}

/// @param mensaje
/// @param p
/// @param tam
/// @param min
/// @param max
/// carga manual de vector  pide numero y luego posicion
///
void CargarVector(char mensaje[], int p[], int tam)
{
//int i;
	int intentos = 0;
	int posicion;
	int numero;
	char seguir;
	do
	{
		numero = PedirEntero(mensaje);
		posicion = PedirEntero("ingrese la posicion");
		p[posicion - 1] = numero;

		printf("desea ingresar otro ingrese 's' ");
		fflush(stdin);
		scanf("%c", &seguir);
		intentos++;
	}
	while (seguir == ' ' && intentos < tam);

}
int PedirEntero(char mensaje[])
{
	int entero;
	printf("%s", mensaje);
	scanf("%d", &entero);
//entero = ValidarEntero(entero, min, max);
	
	return entero;
}
