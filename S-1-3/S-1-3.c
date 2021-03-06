/*
 ============================================================================
 Name        : S-1-3.c
 Author      : Gonzalez Ricardo 1-F
 Ejercicio 1-3:
 Realizar el algoritmo que permita ingresar los datos de los alumnos de una divisi?n de la UTN FRA, los datos solicitados son:
 Legajo
 Tipo cursada(L: "libre" - P: "presencial" ? R: "remota")
 Cantidad de materias( mas de cero y menos de 8)
 Sexo (F: ?femenino? ? M: ?masculino? , O: ?no binario?)
 Nota promedio (entre 0 y 10)
 Edad (validar)
 Se debe informar de existir, o informar que no existe , en el caso que corresponda.
 a) El Legajo del mejor promedio femenino.
 b) El legajo del m?s joven de los alumnos masculinos entre los que dan libre.
 c) El promedio de nota por sexo.
 d) La edad y legajo del que cursa m?s materias. (Sin importar su g?nero)

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "biblioteca.h"

int main(void)
{
	setbuf(stdout, NULL);
	int cursaMasMateriasEdad;
	int cursaMasMateriasLegajo;
	int cursaMasMaterias;
	int flagMaterias = 1;
	int legajo;
	char tipoCursada;
	int cantidadMaterias;
	char sexo;
	int notaPromedio;
	int edadIngresada;
	int flagUNO;
	int flagDOS;
	int mejorPromedioFemenino;
	int mejorPromedioFemeninoLegajo;
	int masculinoJovenLibreEdad;
	int masculinoJovenLibrelegajo;
	float promedioNotaMasculino;
	float promedioNotaFemenino;
	int contadorpromedioMasculino;
	int contadorpromedioFemenino;
	int acumuladorPromedioMasculino;
	int acumuladorPromedioFemenino;
	char respuesta = 's';

	acumuladorPromedioFemenino = 0;
	acumuladorPromedioMasculino = 0;
	contadorpromedioFemenino = 0;
	contadorpromedioMasculino = 0;
	flagUNO = 1;
	flagDOS = 1;

	do
	{

		printf("ingrese numero de legajo\n"); // legajo
		scanf("%d", &legajo);
		while (legajo < 0)
		{
			printf("ERROR ingrese numero de legajo\n");
			scanf("%d", &legajo);
		}

		printf("ingrese L: libre - P: presencial ? R: remota ");     //cursada
		fflush(stdin);	//windows
		scanf(" %c", &tipoCursada);
		tipoCursada = tolower(tipoCursada);
		while (tipoCursada != 'l' && tipoCursada != 'p' && tipoCursada != 'r')
		{
			printf("ERROR ingrese L: libre - P: presencial ? R: remota");
			fflush(stdin);	//windows
			scanf(" %c", &tipoCursada);
			tipoCursada = tolower(tipoCursada);
		}
		printf("ingrese cantidad de materias \n");	// cantidad de materias mas de cero y menos de 8
		scanf("%d", &cantidadMaterias);
		while (cantidadMaterias < 0 || cantidadMaterias > 7)
		{
			printf("ERROR ingrese cantidad de materias \n");
			scanf(" %d", &cantidadMaterias);
		}
		printf("ingrese 'f' para femenino, 'm' para masculino, 'o' para no binario\n");	//sexo
		fflush(stdin);	//windows
		scanf(" %c", &sexo);
		sexo = tolower(sexo);
		while (sexo != 'f' && sexo != 'm' && sexo != 'o')
		{
			printf("ERROR ingrese 'f' para femenino, 'm' para masculino, 'o' para no binario\n");	//sexo
			fflush(stdin);	//windows
			scanf(" %c", &sexo);
			sexo = tolower(sexo);
		}                                               //sexo
// edad( solo mayores de edad, m?s de 17)
		printf("ingrese edad\n");
		scanf("%d", &edadIngresada);
		while (edadIngresada < 0 || edadIngresada > 90)
		{
			printf("ERROR ingrese edad\n");
			scanf(" %d", &edadIngresada);
		}
//nota promedio. entre 0 y 10
		printf("ingrese nota promedio\n");
		scanf("%d", &notaPromedio);
		while (notaPromedio < 0 || notaPromedio > 10)
		{
			printf("ERROR ingrese nota promedio\n");
			scanf(" %d", &notaPromedio);
		}

		/*
		 *  a) El Legajo del mejor promedio femenino.
		 b) El legajo del m?s joven de los alumnos masculinos entre los que dan libre.
		 c) El promedio de nota por sexo.
		 d) La edad y legajo del que cursa m?s materias. (Sin importar su g?nero)
		 *
		 */

		if (sexo == 'f')
		{
			if (flagUNO == 1 || notaPromedio > mejorPromedioFemenino)
			{
				mejorPromedioFemenino = notaPromedio;
				mejorPromedioFemeninoLegajo = legajo;

				flagUNO = 0;
			}
			contadorpromedioFemenino++;
			acumuladorPromedioFemenino += notaPromedio;
		}

		switch (sexo)
		{
		/*
		 case 'f':
		 if (flagUNO == 1 || notaPromedio > mejorPromedioFemenino)
		 {
		 mejorPromedioFemenino = notaPromedio;
		 mejorPromedioFemeninoLegajo = legajo;

		 flagUNO = 0;
		 }
		 contadorpromedioFemenino++;
		 acumuladorPromedioFemenino += notaPromedio;

		 break;*/
		case 'm':

			acumuladorPromedioMasculino += notaPromedio;
			contadorpromedioMasculino++;

			if (tipoCursada == 'l')
			{
				if (flagDOS == 1 || edadIngresada < masculinoJovenLibreEdad)
				{
					masculinoJovenLibreEdad = edadIngresada;
					masculinoJovenLibrelegajo = legajo;

					flagDOS = 0;
				}
			}
			break;
		case 'o':

			break;

		default:

			break;

		}
		// d) La edad y legajo del que cursa m?s materias. (Sin importar su g?nero)
		if (flagMaterias == 1 || cantidadMaterias > cursaMasMaterias)
		{
			cursaMasMaterias = cantidadMaterias;
			cursaMasMateriasEdad = edadIngresada;
			cursaMasMateriasLegajo = legajo;
		}
		printf("\ndesea continuar ingrese (s) salir (n)\n");
		fflush(stdin);
		scanf("%c", &respuesta);
		respuesta = tolower(respuesta);

	}
	while (respuesta != 'n');
	//fin

	if (acumuladorPromedioFemenino > 0)
	{
		promedioNotaFemenino = CalculoPromedio(acumuladorPromedioFemenino, contadorpromedioFemenino);
	}
	if (acumuladorPromedioMasculino > 0)
	{
		promedioNotaMasculino = CalculoPromedio(acumuladorPromedioMasculino, contadorpromedioMasculino);
	}
	if (flagUNO == 0)
	{
		printf("mejor promedio femenino legajo: %d\n", mejorPromedioFemeninoLegajo);
		printf("promedio femenino: %.2f \n", promedioNotaFemenino);
	}
	if (flagDOS == 0)
	{
		printf("legajo del masculino mas joven libre %d \n", masculinoJovenLibrelegajo);
		printf("promedio masculino: %.2f\n", promedioNotaMasculino);
	}

	printf("cursa m?s materias legajo: %d edad: %d \n", cursaMasMateriasLegajo, cursaMasMateriasEdad);
	
	return EXIT_SUCCESS;
}

