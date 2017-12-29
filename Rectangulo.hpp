/*
 * Clase.hpp
 *
 *  Created on: 29 de dic. de 2017
 *      Author: Daniel
 */

#ifndef CLASE
#define CLASE


class Rectangulo {
public:
	Rectangulo(int a,int l,const char* name);
	Rectangulo(const Rectangulo& rect);
	~Rectangulo();
	int getAncho();
	int getLargo();
	int getVol();
	char* getName();
protected:
private:
	int ancho;
	int largo;
	char* nameRect;
};

#endif
