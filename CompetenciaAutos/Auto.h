#pragma once

#include "iostream"
#include "ArregloDinamico.h"
#include "Llanta.h"
#include "Chasis.h"

using namespace std;
using namespace System;

class Auto
{
private:
	ArregloDinamico<Llanta*> llantas;
	Chasis* chasis; 
	int velocidad;
public:

	Auto(int x, int y, int velocidad) {
		chasis = new Chasis();
		
		chasis->setX(x);
		chasis->setY(y);
		chasis->setForma(string(8, char(219)));
		this->velocidad = velocidad;
		

		for (int i = 0; i < 2; i++) {
			Llanta* llantax = new Llanta();
			llantax->setForma(string(2, char(219)));
			llantax->setX(chasis->getX() + 1 + (4 * i));
			llantax->setY(y - 2);
			llantas.push_back(llantax);
		}
		for (int i = 2; i < 4 ; i++) {
			Llanta* llantax = new Llanta();
			llantax->setForma(string(2, char(219)));
			llantax->setX(chasis->getX() + 1 + (4 * ( i-2)));
			llantax->setY(y + 2);
			llantas.push_back(llantax);
		}
		
	}

	~Auto() {

	}


	void dibujarAuto() {
		Console::SetCursorPosition(chasis->getX(),chasis->getY());
		cout << chasis->getForma();
		for (int i = 0; i < llantas.size(); i++) {
			Console::SetCursorPosition(llantas[i]->getX(), llantas[i]->getY());
			cout << llantas[i]->getForma();
		}
	}
	void moverAuto(int velocidad) {
		for (int i = 0; i < llantas.size(); i++) {
			llantas[i]->setX(llantas[i]->getX() + velocidad);
		}
		chasis->setX(chasis->getX() + velocidad);
	}
	void borrarAuto() {
		Console::SetCursorPosition(chasis->getX(), chasis->getY());
		cout << string(8,' ');
		for (int i = 0; i < (llantas.size()); i++) {
			Console::SetCursorPosition(llantas[i]->getX(), llantas[i]->getY());
			cout << string(2, ' ');
		}
	}

	int getX() {
		return chasis->getX();
	}
	void setVelocidad(int x) {
		this->velocidad = x;
	}
	int getVelocidad() {
		return this->velocidad;
	}
};

