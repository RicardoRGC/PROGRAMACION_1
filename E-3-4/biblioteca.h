/*
 * biblioteca.h
 *
 *  Created on: 31 ago. 2021
 *      Author: gonza
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_
/// @param mensaje texo que se muestra al pedir numeromo
/// @param min el valor minimo del rango de validacion
/// @param max el valor maximo del rango de validacion
/// @return  el numero ingresado validado
int PedirEntero(char mensaje[], int min, int max);
int ValidarEntero(int, int, int);

#endif /* BIBLIOTECA_H_ */
