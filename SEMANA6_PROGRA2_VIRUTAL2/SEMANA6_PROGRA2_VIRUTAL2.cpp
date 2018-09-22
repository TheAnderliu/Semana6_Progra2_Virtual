// SEMANA6_PROGRA2_VIRUTAL2.cpp: archivo de proyecto principal.

#include "stdafx.h"


int main()
{
	CJuego * obj = new CJuego();
	obj->ImprimirBarras();
	while (1)
	{
		if (kbhit())
		{
			if (_getch()=='a')
			{
				obj->InsertarAlFinal();
			}
		}
		obj->MostrarTodo();
		_sleep(50);
		obj->BorrarTodo();
		obj->MoverTodo();
		obj->ImprimirBarras();


	}



    return 0;
}
