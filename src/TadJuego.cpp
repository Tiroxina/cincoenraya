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


	int     nLinea,
		    nPiezas,
			turno;




	 int  tam;
	 int fila = 0;
	 int col = 0;


		// si turno es 0 comienza el color negro; si es 1, comienza blanco
		// nLinea: longitud de la cadena para ganar
		// nPiezas: número inicial de piezas para cada jugador



			if (entornoCargarConfiguracion(tam, turno, nLinea, nPiezas)) {

				juego.turno = turno;
				juego.nLinea = nLinea;
				juego.nPiezas = nPiezas;

					entornoIniciar(tam);
					entornoMarcarPosicion(fila, col);
					entornoMarcadorTurno(turno);

					iniciarTablero(juego.tablero, tam);



			}
}

void jugar(Juego &juego) {
	TipoTecla tecla;
	string msg;
			msg = " ";
			bool salir = false;


		int     nLinea,
			    nPiezas,
				turno;




		 int  tam;
		 int fila = 0;
		 int col = 0;

	iniciar(juego);

	while (!salir) {
		tecla = entornoLeerTecla();

		switch (tecla) {
		case TEnter:



			entornoPonerPieza(fila, col, turno);

			if(turno == 0) turno = 1;
			else turno= 0;
			entornoMarcadorTurno ( turno);
			ponerPieza(juego.tablero, fila, col, turno);
			estaVacia(juego.tablero, fila, col);


			break;

		case TDerecha:
			entornoDesmarcarPosicion(fila, col);

			if (col < tam - 1)
				col++;
			else
				col = 0;

			entornoMarcarPosicion(fila, col);

			break;
		case TIzquierda:
			entornoDesmarcarPosicion(fila, col);

			if (col > 0)
				col--;
			else
				col = tam - 1;

			entornoMarcarPosicion(fila, col);
			break;
		case TArriba:
			entornoDesmarcarPosicion(fila, col);

			if (fila > 0)
				fila--;
			else
				fila = tam - 1;
			entornoMarcarPosicion(fila, col);
			break;
		case TAbajo:
			entornoDesmarcarPosicion(fila, col);

			if (fila < tam - 1)
				fila++;
			else
				fila = 0;
			entornoMarcarPosicion(fila, col);

			break;
		case TF1:
			break;
		case TF2:


		case TSalir:
			msg = "Has abandonado";
			salir = true;
			break;
		case TNada:
			break;



		}
	}


	entornoMostrarMensajeFin(msg);
	entornoPausa(1.5);

	entornoTerminar();
}






















