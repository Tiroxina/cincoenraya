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





};

void iniciarTablero(Tablero tablero, int tam);

void ponerColor(Tablero tablero, int fila, int col, int color);

int obtenerColor (Tablero tablero, int fila, int col);

bool estaVacia (Tablero tablero, int fila, int col);

#endif /* TADTABLERO_H_ */
