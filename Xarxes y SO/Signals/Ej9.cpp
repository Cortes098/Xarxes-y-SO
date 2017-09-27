#include "stdafx.h"
#include <iostream>

 
pid_t pidA;
void handler(int param)
{
	if (param == SIGALAM) 
	{
		std::cout << "alarm con pid" << pidA<< std::endl;
	}

	if (param == SIGINT)
	{
		signal(SIGINT, SIG_IGN);
		std::cout << "alarm" << std::endl;
	}

}


void main()
{
	pid_t pidP,pidH;
	signal(SIGALARM, handler);
	alarm(5);

	pid = fork(); 
	pidA = getpid();

	if(pid1==0)
	{
		std::cout << "soy el hijo con pid " << pidA << std::endl;
		alarm(1);
		while (true) pause();
	}
		
	
	else 
	{
		std::cout << "soy el padre con pid " << pidA << std::endl;
		alarm(1);
		while (true) pause();
	}
}