#include "stdafx.h"
#include <iostream>



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



void ejercicio7()
{
	signal(SIGINT, controlsalida); //Cuando haya un sigint llama a la funcion control salida
	signal(SIGALARM, controlsalida);
	while (true)
		pause();
}

void ejercicio

void main() 
{
	ejercicio7();	
	pause();
}