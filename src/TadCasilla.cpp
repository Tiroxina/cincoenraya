/*
 * TadCasilla.cpp
 *
 *  Created on: 8 ene. 2024
 *      Author: alumno
 */

#include <iostream>
using namespace std;
#include "TadCasilla.h"



void crearCasilla(Casilla &c, int color, bool vacia) {
	c.color = color;
	c.vacia = vacia;
}

void ponerColorCasilla(Casilla &c, int color) {
	c.color = color;
}

int obtenerColorCasilla(Casilla c) {

	return c.color;

}

bool estaVaciaCasilla(Casilla c) {

	return c.vacia;
}
