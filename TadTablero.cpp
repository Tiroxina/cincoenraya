/*
 * TadTablero.cpp
 *
 *  Created on: 9 ene. 2024
 *      Author: alumno
 */

#include "TadTablero.h"

void iniciarTablero(Tablero &tablero, int tam) {

	int i, j;

	for(i = 0; i < tam; i++){

   for(j = 0; j < tam; j++){

			tablero.matriz[i][j].vacia = true;

		}


	}




}

int obtenerTamanoReal(Tablero tablero) {

	return tablero.realTamano;



}



void ponerPieza(Tablero &tablero, int fila, int col, int color) {

	tablero.matriz[fila][col].color = color;




}

int obtenerColor(Tablero tablero, int fila, int col) {

	return tablero.matriz[fila][col].color;


}



bool estaVacia(Tablero tablero, int fila, int col) {

	return tablero.matriz[fila][col].vacia;


}


bool estaLleno(Tablero tablero) {


	int i;
	int j;
	int cont = 0;
	for(i = 0; i < tablero.realTamano; i++){
		for(j = 0; j < tablero.realTamano; j++){

		if(!estaVacia(tablero, i, j)){
			cont++;
		}
	}
	}
	return cont == tablero.realTamano*tablero.realTamano;







}


bool haylinea(Tablero tablero, int fila, int col, int tamcadena) {


	int color = obtenerColor(tablero, fila, col);
	int i;
	int j;

	int horizontal = 0;
	for(i = 0; i < tablero.realTamano; i++){
		if(obtenerColor(tablero, col, i) == color){
			horizontal++;
			if(horizontal == tamcadena){

				return true;
			}
		}
		else{
			horizontal = 0;
		}
	}

	int vertical = 0;

	for(j = 0; j < tablero.realTamano; j++){
		if(obtenerColor(tablero, col, j) == color){
			vertical++;
			if(vertical == tamcadena){

				return true;
			}
		}
		else{
			vertical = 0;
		}
	}

	int diagonalinferiorderecha = 0;

	for(i = fila, j = col; i < tablero.realTamano && j < tablero.realTamano; i++, j++){
		if(obtenerColor(tablero,i,j) == color){
			diagonalinferiorderecha++;
			if(diagonalinferiorderecha == tamcadena){

				return true;

			}
		}
		else{
			diagonalinferiorderecha = 0;
		}

	}

	int diagonalinferiorizquierda = 0;

	for(i = fila, j = col; i >= 0 && j >= 0 ; i++, j--){
		if(obtenerColor(tablero,i,j) == color){
			diagonalinferiorizquierda++;
			if(diagonalinferiorizquierda == tamcadena){

				return true;

			}
		}
		else{
			diagonalinferiorizquierda = 0;
		}

	}

	int diagonalsuperiorderecha = 0;

	for(i = fila, j = col; i < tablero.realTamano && j < tablero.realTamano; i--, j++){
		if(obtenerColor(tablero,i,j) == color){
			diagonalsuperiorderecha++;
			if(diagonalsuperiorderecha == tamcadena){

				return true;

			}
		}
		else{
			diagonalsuperiorderecha = 0;
		}

	}

	int diagonalsuperiorizquierda = 0;

	for(i = fila, j = col; i >= 0 && j >= 0; i--, j--){
		if(obtenerColor(tablero,i,j) == color){
			diagonalsuperiorderecha++;
			if(diagonalsuperiorizquierda == tamcadena){

				return true;

			}
		}
		else{
			diagonalsuperiorizquierda = 0;
		}

	}



return false;

}


