#include "stdafx.h"



CJuego::CJuego()
{
	Arreglo = NULL;
	N = 0;
}


CJuego::~CJuego()
{
}

void CJuego::ImprimirBarras(){
	Console::ForegroundColor = ConsoleColor::Gray;
	for (int vy  = 0; vy < 24; vy++)
	{
		Console::SetCursorPosition(30, vy);
		cout << (char)219;
		Console::SetCursorPosition(50, vy);
		cout << (char)219;
	}

}


void CJuego::InsertarAlFinal(){
	Random x;
	CMovil **temp = new CMovil*[N + 1];
	for (int i = 0; i < N; i++)
	{
		temp[i] = Arreglo[i];
	}
	//temp[N] = new CMovil(rand() % 79, rand() % 23);
	temp[N] = new CMovil((x.Next(0, 70)), (x.Next(0, 20)));
	N++;
	if (Arreglo!=NULL)
	{
		delete[]Arreglo; 
	}
	Arreglo = temp;
}


void CJuego::MostrarTodo(){

	for (int i = 0; i < N; i++)
	{
		Arreglo[i]->Mostrar();
	}

}


void CJuego::MoverTodo(){
	for (int i = 0; i < N; i++)
	{
		Arreglo[i]->Mover();
	}
}


void CJuego::BorrarTodo(){

	for (int i = 0; i < N; i++)
	{
		Arreglo[i]->Borrar();
	}

}