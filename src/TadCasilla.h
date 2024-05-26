/*
 * TadCasilla.h
 *
 *  Created on: 8 ene. 2024
 *      Author: alumno
 */

#ifndef TADCASILLA_H_
#define TADCASILLA_H_


struct Casilla {
		int color;
		bool vacia;

};


void crearCasilla  (Casilla &c, int color, bool vacia );

void ponerColorCasilla (Casilla &c, int color);

int obtenerColorCasilla (Casilla c);

bool estaVaciaCasilla (Casilla c);





#endif /* TADCASILLA_H_ */
