/*
 * Clase.hpp
 *
 *  Created on: 29 de dic. de 2017
 *      Author: Daniel
 */

#ifndef CLASE
#define CLASE

#include<string>

using namespace std;

class Rectangulo {
public:
	Rectangulo(int a,int l,const char* name);
	Rectangulo(int a,int l,const string& name);
	Rectangulo(const Rectangulo& rect);
	~Rectangulo();
	int getAncho();
	int getLargo();
	int getVol();
	string& getName();
protected:
private:
	int ancho;
	int largo;
	string nameRect;
};

#endif
