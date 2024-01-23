/*
 * TadJuego.cpp
 *
 *  Created on: 21 ene. 2024
 *      Author: alumno
 */

#include "TadJuego.h"

void iniciar(Juego &juego) {
	string msg;
		msg = " ";
		bool salir = false;

		TipoTecla tecla;

	int     nLinea,
		    nPiezas,
			turno;

	juego.turno = turno;
	juego.nLinea = nLinea;
	juego.nPiezas = nPiezas;

		int fila,
		    col,
		    tam;

		fila = 0;
		col  = 0;
		// si turno es 0 comienza el color negro; si es 1, comienza blanco
		// nLinea: longitud de la cadena para ganar
		// nPiezas: número inicial de piezas para cada jugador


			if (entornoCargarConfiguracion(tam, turno, nLinea, nPiezas)) {

					entornoIniciar(tam);
					entornoMarcarPosicion(tam/2, tam/2);
					entornoMarcadorTurno(turno);


					while (!salir) {
						tecla = entornoLeerTecla();

					}
			}
}



