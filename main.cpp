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

Rectangulo r(2,2,"Rect2x2");
auto r2(r);

cout << "Nombre Rect : " << r.getName() << endl;
cout << "Volumen Rect : " << r.getVol() << endl;
cout << "Address Rect : " << &r << endl;


cout << "Nombre Rect : " << r2.getName() << endl;
cout << "Ancho Rect : " << r2.getAncho() << endl;
cout << "Largo Rect : " << r2.getLargo() << endl;
cout << "Address Rect : " << &r2 << endl;

}
