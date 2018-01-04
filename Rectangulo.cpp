/*
 * clase.cpp
 *
 *  Created on: 29 de dic. de 2017
 *      Author: Daniel
 */

#include<iostream>
#include"./Rectangulo.hpp"
#include<string.h>

using namespace std;

Rectangulo::Rectangulo(int a,int l,const char* name) {
	ancho=a;
	largo=l;
	nameRect=name;
	cout<<"Rectangle Constructor from Char*"<<endl;
}

Rectangulo::Rectangulo(int a,int l,const string& name) {
	ancho=a;
	largo=l;
	nameRect=name;
	cout<<"Rectangle Constructor from string"<<endl;;
}

Rectangulo::Rectangulo(const Rectangulo& rect) {
	ancho=rect.ancho;
	largo=rect.largo;
	nameRect=rect.nameRect;
}
Rectangulo::~Rectangulo() {
	cout<<"Rectangle Destructor"<<endl;
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
string& Rectangulo::getName() {
	return nameRect;
}
