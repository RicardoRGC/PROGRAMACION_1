/*
 ============================================================================
 Name        : Practicas.c
 Author      : Gonzalez Ricardo 1-F


 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//biblioteca
#define T 20
/*
 * escalares 1 dato en memoria(entero,caracter,memoria) valor
 * compuestas: arrays(unidimensionales-bidimensionales) referencia
 * estructuras(multitipo) valor
 *
 */
typedef struct
{
	// campos atributos
	int legajo;
	int edad;
	float nota;
	char nombre[50];
} eAlumnos;

void cargarAlumnos(int legajo, char nombre[][50], float nota[], int edad[], int tam);
void mostarAlumnos(int legajo, char nombre[][50], float nota[], int edad[], int tam);
int PedirEntero(char mensaje[], int min, int max);
float PedirFloat(char mensaje[], int min, int max);
void OrdenarAlumnosPorNombre(int legajo[], char nombre[][50], float nota[], int edad[], int tam);
void OrdenarAlumnosPorNotas(int legajo[], char nombre[][50], float nota[], int edad[], int tam);
int main(void)
{
	setbuf(stdout, NULL);
	//modelos de datos

	/*int legajo[T] = { 1001, 1000 };

	 int edad[T] = { 20, 30 };
	 float nota[T] = { 10, 5 };
	 char nombre[T][50] = { "maria", "luis" };
	 //modelos de datos

	 //cargarAlumnos(legajo, nombre, nota, edad, 2);
	 //OrdenarAlumnosPorNotas(legajo, nombre, nota, edad, 2);
	 //mostarAlumnos(legajo, nombre, nota, edad, 2);
	 */

	eAlumnos miAlumno = { 1000, 25, 10, "juan" };

	printf("%d\n", sizeof(miAlumno));
	printf("%d %s %.2f %d", miAlumno.legajo, miAlumno.nombre, miAlumno.nota, miAlumno.edad);

	return EXIT_SUCCESS;
}
int PedirEntero(char mensaje[], int min, int max)
{

	int entero;
	printf("%s", mensaje);
	scanf("%d", &entero);
	//entero = ValidarEntero(entero, min, max);

	return entero;
}
/*
 void OrdenarAlumnosPorNombre(int legajo[], char nombre[][50], float nota[], int edad[], int tam)
 {

 int auxEntero;

 float auxFlotante;
 char auxstring[50];

 for (int i = 0; i < tam - 1; i++)
 {
 for (int j = i + 1; j < tam; j++)
 {
 if (strcmp(nombre[i], nombre[j]) < 0) //criterio de ordenamiento ordena de z-a por cadena
 {
 auxFlotante = nota[i];
 nota[i] = nota[j]; // intercambian valores
 nota[j] = auxFlotante;

 auxEntero = edad[i];
 edad[i] = edad[j]; // intercambian valores
 edad[j] = auxEntero;

 auxEntero = legajo[i];
 legajo[i] = legajo[j]; // intercambian valores
 legajo[j] = auxEntero;

 strcpy(auxstring, nombre[i]);
 strcpy(nombre[i], nombre[j]);
 strcpy(nombre[j], auxstring);

 }
 }
 }
 }
 /// @param legajo
 /// @param nombre
 /// @param nota
 /// @param edad
 /// @param tam
 void OrdenarAlumnosPorNotas(int legajo[], char nombre[][50], float nota[], int edad[], int tam)
 {

 int auxEntero;
 float auxFlotante;
 char auxstring[50];
 for (int i = 0; i < tam - 1; i++)
 {
 for (int j = i + 1; j < tam; j++)
 {
 if (nota[i] < nota[j]) //criterio de ordenamiento
 {
 auxFlotante = nota[i];
 nota[i] = nota[j]; // intercambian valores
 nota[j] = auxFlotante;

 auxEntero = edad[i];
 edad[i] = edad[j]; // intercambian valores
 edad[j] = auxEntero;

 auxEntero = legajo[i];
 legajo[i] = legajo[j]; // intercambian valores
 legajo[j] = auxEntero;

 strcpy(auxstring, nombre[i]);
 strcpy(nombre[i], nombre[j]);
 strcpy(nombre[j], auxstring);

 }
 }
 }
 }

 void mostarAlumnos(int legajo[], char nombre[][50], float nota[], int edad[], int tam)
 {
 for (int i = 0; i < T; i++)
 {
 printf("%d %s %d %.2f\n ", legajo[i], nombre[i], edad[i], nota[i]);

 }
 }
 void cargarAlumnos(int legajo, char nombre[][50], float nota[], int edad[], int tam)
 {
 for (int i = 0; i < tam; i++)
 {
 //legajo[i] = PedirEntero("legajo");
 edad[i] = PedirEntero("edad", 0, 0);
 nota[i] = PedirFloat("nota", 0, 10);

 //getstring(nombre[i], "ingrese nombre", 50);
 }
 }
 int PedirEntero(char mensaje[], int min, int max)
 {

 int entero;
 printf("%s", mensaje);
 scanf("%d", &entero);
 //entero = ValidarEntero(entero, min, max);

 return entero;
 }
 float PedirFloat(char mensaje[], int min, int max)
 {
 float entero;
 printf("%s", mensaje);
 scanf("%f", &entero);
 //entero = ValidarEntero(entero, min, max);

 return entero;
 }
 */
