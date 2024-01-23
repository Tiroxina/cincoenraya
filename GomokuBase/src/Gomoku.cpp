//============================================================================
// Name        : Gomoku.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "entorno.h"

using namespace std;

void ejemplo() {
	string msg;
	msg = " ";
	bool salir = false;

	TipoTecla tecla;
	int nLinea,
	    nPiezas,
		turno;

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
		entornoMarcarPosicion(fila, col);
		entornoMarcadorTurno(turno);


		for (int i = 0; i < nLinea; i++) {
			entornoPonerPieza(i, 10, 1);
		}
		entornoPausa(1);
		for (int i = 0; i < nLinea; i++) {
			entornoMarcarLinea(i, 10);
		}

		for (int j = 0; j < nLinea; j++) {
			entornoPonerPieza(10, j, 0);
		}
		entornoPausa(1);
		for (int j = 0; j < nLinea; j++) {
			entornoMarcarLinea(10, j);
		}

		while (!salir) {
			tecla = entornoLeerTecla();

			switch (tecla) {
			case TEnter:


				entornoPonerPieza(fila, col, turno);

				if(turno == 0) turno = 1;
				else turno= 0;
				entornoMarcadorTurno ( turno);




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
				break;

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
	}

	entornoTerminar();
}

int main() {

	ejemplo();
	return 0;
}
