#pragma once
class Enemigo {
private:
	int anchoavatarenemigo;
	int altoavatarenemigo;

public:
	int getAnchoAvatarEnemigo() { return anchoavatarenemigo; }
	void setAnchoAvatar(int _anchoavatarenemigo) { anchoavatarenemigo = _anchoavatarenemigo; }

	int getAltoAvatar() { return altoavatarenemigo; }
	void setAltoAvatar(int _altoavatarenemigo) { altoavatarenemigo = _altoavatarenemigo; }

	void Morirenemigo();
	void Correrenemigo();
};
