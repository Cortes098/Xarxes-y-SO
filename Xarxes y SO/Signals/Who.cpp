#include <iostream>	
#include <fcntl.h>


void ejercicioclase()
{
	int nuevo;

	close(STDOUT_FILENO);
	nuevo = ("example.txt", O_CREAT | O_WRONLY);

	if (nuevo>=0)
	{
		execl("/user/bin/who", "/user/bin/who",NULL)
	}
	close(nuevo);
}

void main()
{
	execl("-path-","who")
}