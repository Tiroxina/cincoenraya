/*
 * TadTablero.h
 *
 *  Created on: 9 ene. 2024
 *      Author: alumno
 */

#ifndef TADTABLERO_H_
#define TADTABLERO_H_
#include "TadCasilla.h"

const int MAX = 19;


struct Tablero{

	Casilla matriz[MAX][MAX];
	int realTamano;





};

void iniciarTablero(Tablero &tablero, int tam);

int obtenerTamanoReal(Tablero tablero);

void ponerPieza(Tablero &tablero, int fila, int col, int color);

int obtenerColor(Tablero tablero, int fila, int col);

bool estaVacia(Tablero tablero, int fila, int col);

bool estaLleno(Tablero tablero);

bool haylinea (Tablero tablero, int fila, int col, int tamcadena);

#endif /* TADTABLERO_H_ */
