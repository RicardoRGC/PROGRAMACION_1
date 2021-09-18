/*
 * bi.h
 *
 *  Created on: 11 sep. 2021
 *      Author: gonza
 */

#ifndef BI_H_
#define BI_H_

int PedirEntero(char mensaje[]);
void CargarVector(char mensaje[], int p[], int tam);
int DeterminarSigno(int signo);
int acumuladorPositivosNegativos(int p[], int tam);
float PromedioFuncion(int numeroUno, int numerodos);
void MostrarVector(int p[], int tam);
int contadorPositivosNegativos(int p[], int tam);
int numeroMinimoNegativo(int p[], int tam);
void sumaAntecesoresNegativos(int negativo);
#endif /* BI_H_ */
