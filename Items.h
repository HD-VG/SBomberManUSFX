#pragma once
class Items {
private:
	int posicionitemsX;
	int posicionitemsY;
	int tipoitems;
	int duracionitems;
public:
	int getPosicionItemsX() { return posicionitemsX; }
	void setPosicionItemsX(int _posicionitemsX) { posicionitemsX = _posicionitemsX; }

	int getPosicionItemsY() { return posicionitemsY; }
	void setPosicionItemsY(int _posicionitemsY) { posicionitemsY = _posicionitemsY; }

	int getTipoItems() { return tipoitems; }
	void setTipoItems(int _tipoitems) { tipoitems = _tipoitems; }

	int getDuracionItems() { return duracionitems; }
	void setDuracionItems(int _duracionitems) { duracionitems = _duracionitems; }
};
