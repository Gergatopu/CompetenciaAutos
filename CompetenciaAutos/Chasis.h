#pragma once
#include "string"
using namespace std;
class Chasis
{
private:
	int x, y;
	string forma;
public:

	Chasis() {
		x = 10;
		y = 10;
		forma = string(8, char(219));
	}

	Chasis(int x, int y, string forma) {
		this->x = x;
		this->y = y;
		this->forma = forma;
	}
	~Chasis() {

	}

	void setX(int nx) {
		x = nx;
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

