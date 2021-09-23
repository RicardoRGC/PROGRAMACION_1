/*
 * eProductos.h
 *
 *  Created on: 22 sep. 2021
 *      Author: riky
 */

#ifndef EPRODUCTOS_H_
#define EPRODUCTOS_H_

typedef struct
{
	int idProducto;
	char descripcion[50];
	int nacionalidad;
	int tipo;
	float precio;
	int estado;

} eProductos;
void inicializarProductos(eProductos lista[], int tam);
void cargaDePROductos(eProductos lista[], int tam);
int PedirEntero(char mensaje[]);
void MostrarProducto(eProductos producto);
void MostrarListaProductos(eProductos listaProductos[], int tam);
void BajaProducto(eProductos listaProductos[], int tam);
void ModificacionProducto(eProductos listaProductos[], int tam);

void pedirCadena(char cadena[], char mensaje[], int tam);
float Pedirfloat(char mensaje[]);
int validarDecimal(float flotante);
int ValidarCharNumeroEntero(char numero[], int tam);
void OrdenarNumeros(eProductos lista[], int tam);
int estadoDeLista(eProductos lista[], int tam);
void InicializarListaProductos(eProductos listaProductos[], int tam);
void OrdenarPorCaracter(eProductos lista[], int tam);

#endif /* EPRODUCTOS_H_ */
