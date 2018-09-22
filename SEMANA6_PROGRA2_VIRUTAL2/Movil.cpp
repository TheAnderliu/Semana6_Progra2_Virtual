#include "stdafx.h"


CMovil::CMovil(int _x, int _y){

	x = _x;
	y = _y;
	dx = 1;

}

CMovil::~CMovil(){

}

void CMovil::Mostrar(){
	if (x<30)
	{Console::ForegroundColor = ConsoleColor::Blue;}

	if (x==30)
	{Console::ForegroundColor = ConsoleColor::Gray;}

	if (x>30&&x<50)
	{Console::ForegroundColor = ConsoleColor::Red;}

	if (x>=50)
	{Console::ForegroundColor = ConsoleColor::Gray;}
	Console::SetCursorPosition(x, y);
	cout << (char)219;
}

void CMovil::Mover(){
	if (x+dx<=0||x+dx>=79)
	{
		dx = dx*-1;
	}

	x += dx;
}

void CMovil::Borrar(){
	Console::SetCursorPosition(x,y);
	cout << " ";
}