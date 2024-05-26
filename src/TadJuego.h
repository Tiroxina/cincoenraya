/*
 * TadJuego.h
 *
 *  Created on: 21 ene. 2024
 *      Author: alumno
 */

#ifndef TADJUEGO_H_
#define TADJUEGO_H_
#include "TadTablero.h"
#include "entorno.h"




struct Juego {

	Tablero tablero;
	int turno;
	int nLinea;
	int nPiezas;


};

void iniciar(Juego &juego);

void jugar(Juego &juego);

void terminar();



#endif /* TADJUEGO_H_ */
