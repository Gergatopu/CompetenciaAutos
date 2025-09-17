#pragma once
#include "Auto.h"
#include "ArregloDinamico.h"
class Competencia

{
private:
	ArregloDinamico<Auto*> autos;
	int meta;//x
public:
	Competencia(int metax) {
		this->meta = metax;
	}
	~Competencia() {

	}
	void registrarAuto(int x, int y, int velocidad) {
		Auto* autoX = new Auto(x,y,velocidad);
		autos.push_back(autoX);
	}

	void animarAutos() {
		for(int i=0; i<autos.size();i++){
		autos[i]->borrarAuto();
		autos[i]->moverAuto(autos[i]->getVelocidad());
		autos[i]->dibujarAuto();
		}
	}

	bool llegoMeta(int meta) {
		for (int i = 0; i < autos.size(); i++) {

			if (meta <= autos[i]->getX()) { return true; }
		}
		return false;
	}

};

