#pragma once
class CJuego
{
private:
	CMovil ** Arreglo;
	int N;

public:
	CJuego();
	~CJuego();
	void ImprimirBarras();
	void InsertarAlFinal();
	void MostrarTodo();
	void MoverTodo();
	void BorrarTodo();

};

