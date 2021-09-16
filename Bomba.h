#pragma once
class Bomba {
private:
	int posicionbombaX;
	int posicionbombaY;
	int nivelbomba;
	int anchobomba;
	int altobomba;
	int tipobomba;

public:
	int getPosicionbombaX() { return posicionbombaX; }
	void setPosicionbombaX(int _posicionbombaX) { posicionbombaX = _posicionbombaX; }

	int getPosicionbombaY() { return posicionbombaY; }
	void setPosicionbombaY(int _posicionbombaY) { posicionbombaY = _posicionbombaY; }

	int getNivelbomba() { return nivelbomba; }
	void setNivelbomba(int _nivelbomba) { nivelbomba = _nivelbomba; }

	int getAnchobomba() { return anchobomba; }
	void setAnchobomba(int _anchobomba) { anchobomba = _anchobomba; }

	int getAltobomba() { return altobomba; }
	void setAltobomba(int _altobomba) { altobomba = _altobomba; }

	int getTipobomba() { return tipobomba; }
	void setTipobomba(int _tipobomba) { tipobomba = _tipobomba; }

	void explotar(); 
};

