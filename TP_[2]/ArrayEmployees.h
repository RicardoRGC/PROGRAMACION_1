/*
 * ArrayEmployees.h
 *
 *  Created on: 26 sep. 2021
 *      Author: riky
 */

#include "B.h"
#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_
typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
} Employee;
void CargarEmpleado(Employee lista[], int tam, int contadorId);
void revisarResuladoAddEmployee(int resultado);
void revisarResuladoInitEmployees(int resultado);
int BuscarPrimerEspacioVacio(Employee* lista, int tam);
int estadoDeLista(Employee* lista, int tam);
int BuscarPrimerEspacioVacio(Employee* lista, int tam);
/// @param len
/// @param name
/// @param lastName
/// @param id
/// @param salario
/// @param sector
/// @return
int pedirEMpleado(int len, char name[], char lastName[], int* id, float* salario,
				int* sector);
/// @param list
/// @param len
/// @param id
/// @param name
/// @param lastName
/// @param salary
/// @param sector
/// @return
int addEmployee(Employee* list, int len, int id, char name[], char lastName[], float salary,
				int sector);
/// @param list
void MostrarEmpleado(Employee list);

/// @param lista
/// @param largo
void printEmployees(Employee* lista, int largo);



/// @param lista
/// @param tam
/// @return
int estadoDeLista(Employee* lista, int tam);

/// @param list array of employees
/// @param len tamaño de array
/// @return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
int initEmployees(Employee* list, int len);


#endif /* ARRAYEMPLOYEES_H_ */
