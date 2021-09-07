/*
 ============================================================================
 Name        : e-3-5.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 3-5:
 Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);

int main(void)
{
	setbuf(stdout, NULL);
	int sumaUno;
	int sumaDOS;

	sumaUno = Sumar1(1, 2);
	printf("suma1 : %d\n", sumaUno);

	sumaDOS = Sumar2();
	printf("suma2: %d\n", sumaDOS);

	Sumar3(6, 5);

	Sumar4();

	return EXIT_SUCCESS;
}
int Sumar1(int numeroUno, int numeroDos) //suma1
{
	int suma;
	suma = numeroUno + numeroDos;

	return suma;
}
int Sumar2(void) //suma2
{
	int numeroUno;
	int numeroDos;
	int suma2;

	printf("ingrese un numero");
	scanf("%d", &numeroUno);

	printf("ingrese otro numero 2 ");
	scanf("%d", &numeroDos);

	suma2 = numeroDos + numeroUno;

	return suma2;

}
void Sumar3(int numeroUNO, int numeroDOS) //suma3
{
	int suma;
	suma = numeroUNO + numeroDOS;

	printf("suma3: %d\n", suma);
}
void Sumar4(void) //suma4
{
	int numeroUno;
	int numeroDos;
	int suma4;

	printf("ingrese numero ");
	scanf("%d", &numeroUno);

	printf("ingrese otro numero ");
	scanf("%d", &numeroDos);

	suma4 = numeroDos + numeroUno;

	printf("suma4 : %d \n", suma4);
}

