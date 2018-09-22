#pragma once
class CMovil
{
private:
	int x, y, dx;
public:
	CMovil(int _x, int _y);
	~CMovil();
	void Mostrar();
	void Mover();
	void Borrar();
};

