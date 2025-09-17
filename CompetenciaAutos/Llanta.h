#pragma once
#include "string"
using namespace std;
class Llanta
{
private:
	int x, y;
	string forma;
public:

	Llanta() {
		x = 10;
		y = 10;
		forma = string(2, char(219));
	}

	Llanta(int x, int y, string forma) {
		this->x = x;
		this->y = y;
		this->forma = forma;
	}
	~Llanta() {
		
	}

	void setX(int nx) {
		this->x = nx;
	}
	int getX() {
		return x;
	}
	void setY(int ny) {
		this->y = ny;
	}
	int getY() {
		return y;
	}
	void setForma(string nuevaForma) {
		this->forma = nuevaForma;
	}
	string getForma() {
		return forma;
	}
};

