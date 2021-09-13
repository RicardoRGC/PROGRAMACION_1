/*
 ============================================================================
 Name        : Sabado.c
 Author      : Gonzalez Ricardo 1-F

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);
	int numeros;
	int contadorNumeros;
	int contadorPositivos;
	int acumuladorNumeros;
	float Promedio;
	char respuesta;
	respuesta = 's';
	contadorNumeros = 0;
	contadorPositivos = 0;
	acumuladorNumeros = 0;

	while (respuesta == 's')
	{
		printf("ingrese numero: ");
		scanf("%d", &numeros);

		if (numeros > 0)
		{
			contadorPositivos++;
		}
		acumuladorNumeros += numeros;

		contadorNumeros++;

//fin
		printf("desea ingresar otro s o n:");
		fflush(stdin); //en un char usar siempre para eliminar basura;
		scanf("%c", &respuesta);
		respuesta = tolower(respuesta);

	}

	Promedio = (float) acumuladorNumeros / contadorNumeros;

	printf("cantidad de positivos: %d\n", contadorPositivos);
	printf("promedio de numeros: %.2f %%\n", Promedio);
	//%.2f agrega solo 2 decimales;

	puts(""); /* prints setbuf(stdout, NULL); */
	return EXIT_SUCCESS;
}
/// @param pares
/// @param tam
/// @return
/// para usar punteros y retornar valor correcto
///
sumadepares
int sumadepares(int numes, int tam int*suma)
{
	par=0

	// paridad devuelve 1 y 0;
	/*
	 if(determinarparidad==1)
	 {
	 acumulador+= numes[i]
	 par=1
	 }
	 */
	// pero si no pongo ningun par
	*suma = acumulador

	return par=1;
}
