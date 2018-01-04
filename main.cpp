/*
 * main.cpp
 *
 *  Created on: 29 de dic. de 2017
 *      Author: Daniel
 */

#include"./Rectangulo.hpp"
#include<iostream>

using namespace std;

int main () {

string s="Rect4x4";

Rectangulo r(2,2,"Rect2x2");
Rectangulo r2(4,4,s);

cout << "Nombre Rect : " << r.getName() << endl;
cout << "Volumen Rect : " << r.getVol() << endl;
cout << "Address Rect : " << &r << endl;

cout << "Nombre Rect : " << r2.getName() << endl;
cout << "Ancho Rect : " << r2.getAncho() << endl;
cout << "Largo Rect : " << r2.getLargo() << endl;
cout << "Volumen Rect : " << r2.getVol() << endl;
cout << "Address Rect : " << &r2 << endl;

}
