#include <iostream>
#include <fcntl.h>

void main() 
{
	int nuevo;

	close(stdcout);
	nuevo = ("example.dat", O_CREAT | O_WRONLY);
	std::cout << "Hello World" << std::endl;
}