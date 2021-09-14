/*
 * bi.h
 *
 *  Created on: 11 sep. 2021
 *      Author: gonza
 */

#ifndef BI_H_
#define BI_H_

int PedirEntero(char mensaje[], int min, int max);
int ValidarEntero(int validar, int min, int max);
void MostrarNumerosImpares(int p[], int tam);
void CargarVector(char mensaje[], int p[], int tam, int min, int max);
void MostrarVector(int p[], int tam);
void ContarPositivosNegativos(int p[], int tam);
int DeterminarParidad(int paridad);
void SumarPares(int p[], int tam);
void MostrarMayorImpar(int p[], int tam);
void MostrarNumerosPares(int p[], int tam);

#endif /* BI_H_ */
