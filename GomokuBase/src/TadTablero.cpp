/*
 * TadTablero.cpp
 *
 *  Created on: 9 ene. 2024
 *      Author: alumno
 */

#include "TadTablero.h"

void iniciarTablero(Tablero tablero, int tam) {

	int i, j;

	for(i = 0; i < tam; i++){

   for(j = 0; j < tam; j++){

			tablero.matriz[i][j].vacia = true;

		}


	}




}

void ponerColor(Tablero tablero, int fila, int col, int color) {

	tablero.matriz[fila][col].color = color;




}

int obtenerColor(Tablero tablero, int fila, int col) {

	return tablero.matriz[fila][col].color;


}

bool estaVacia(Tablero tablero, int fila, int col) {

	return tablero.matriz[fila][col].vacia;


}
