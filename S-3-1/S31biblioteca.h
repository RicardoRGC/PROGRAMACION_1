/*
 * S31biblioteca.h
 *
 *  Created on: 11 sep. 2021
 *      Author: gonza
 */

#ifndef S31BIBLIOTECA_H_
#define S31BIBLIOTECA_H_
/// @param mensaje
/// @param min numero a validar
/// @param max numero a validar
/// @return llama a la funcion validarntero y devuelve el numero ingresado validado.
int PedirEntero(char mensaje[], int min, int max);

/// @param validar :numero a validar lo recibe de pedir numero
/// @param min
/// @param max
/// @return el numero validado
int ValidarEntero(int validar, int min, int max);

/// @param mensaje:  lo q se va mostrar al usuario.
/// @param p vector a cargar
/// @param tam tampaño del vector
/// @param min rango minimo de numeros
/// @param max rango maximo de numeros
void CargarVector(char mensaje[], int p[], int tam, int min, int max);

/// @param p  vector a mostrar
/// @param tam tamaño del vector
void MostrarVector(int p[], int tam);

/// @param p   vector a contar positivos y negativos.
/// @param tam tamñano del vector
/// muestra los positivos y negativos
void ContarPositivosNegativos(int p[], int tam);

/// @param paridad  determina si es par o impar.
/// @return retorna 1 si es par o 0 si es impar
///
int DeterminarParidad(int paridad);

/// @param p  vector a sumar los pares
/// @param tam  tamaño de vector
void SumarPares(int p[], int tam, int*);

/// @param p
/// @param tam
/// llama a la funcion DeterminarParidad y muestra el mayor impar
void MostrarMayorImpar(int p[], int tam);

/// @param p
/// @param tam
/// llama a la funcion DeterminarParidad y muestra solo los numeros pares
void MostrarNumerosPares(int p[], int tam);

/// @param signo ingresa el vector para buscar si es positivo o negativo
/// @return retorna 1 si es par o -1 si es impar
int DeterminarSigno(int signo);

#endif /* S31BIBLIOTECA_H_ */
