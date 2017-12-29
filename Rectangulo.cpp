/*
 * clase.cpp
 *
 *  Created on: 29 de dic. de 2017
 *      Author: Daniel
 */

#include<iostream>
#include"./Rectangulo.hpp"
#include<string.h>

Rectangulo::Rectangulo(int a,int l,const char* name) {
	ancho=a;
	largo=l;
	auto len=strlen(name);
	nameRect=new char[len];
	strcpy(nameRect,name);
}

Rectangulo::Rectangulo(const Rectangulo& rect) {
	ancho=rect.ancho;
	largo=rect.largo;
	auto len=strlen(rect.nameRect);
	nameRect=new char[len];
	strcpy(nameRect,rect.nameRect);
}
Rectangulo::~Rectangulo() {
	delete[] nameRect;
}

int Rectangulo::getAncho() {
	return ancho;
}
int Rectangulo::getLargo() {
	return largo;
}
int Rectangulo::getVol() {
	return ancho*largo;
}
char* Rectangulo::getName() {
	return nameRect;
}
