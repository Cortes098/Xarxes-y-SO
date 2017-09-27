#include "stdafx.h"
#include <iostream>


void handler(int param)
{
	std::cout << "alarm" << std::endl;
	alarm(5);
}

void controlsalida(int param)
{
	signal(SIGINT, SIG_IGN);			//Deshabilita CNTRL+C

	std::cout << "Quieres salir ya?" << std::endl;
	char resp;
	std::cin >> resp;

	if (resp == 'y')
		exit(0);					//Cierra proceso

	signal(SIGINT, controlsalida);	//Habilita CNTRL+C
}

void ejercicio8()
{
	signal(SIGINT, controlsalida);
	signal(SIGALARM, handler);
	alarm(5);

	while (true)
	{
		pause();
	}
}

int main()
{
	ejercicio8();
}