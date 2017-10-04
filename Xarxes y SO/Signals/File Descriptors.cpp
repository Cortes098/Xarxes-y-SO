#include <iostream>
#include <fcntl.h>
#include <wait>


void ejercicioclaseOUT() 
{
	int nuevo;

	close(STDOUT_FILENO);
	nuevo = ("example.txt", O_CREAT | O_WRONLY);

	if (nuevo>=0) 
	{
		std::cout << "Hello World";
	}
	close(nuevo);
}

void ejercicioclaseIN()
{
	int nuevo;

	close(STDIN_FILENO);
	nuevo = open("example.txt", O_RDONLY);
	

	if (nuevo>=0)
	{
		std::string str;
		std::getline(std::cin,str);
		std::cout << "He leido: " << str << std::endl;
	}
	close(nuevo);
}

void ejercicio11()
{

	pid_t pid;
	int fd;

	pid = fork();

	if (pid == 0) 
	{
		fd = (open, "prueba.txt", O_WRONLY);
		write(fd, "123456", 6);
		close(fd);
		exit(0);
	}
	else 
	{
		fd = (open, "prueba.txt", O_WRONLY);
		write(fd, "abcd", 4);
		close(fd);
		int status;
		wait(&status);
	}
}                                                                                         }

void pipes() 
{
	pid_t pid;
	int fd[2];
	size_t lenght = 512;
	char buf[512];
	int ok = pipe(fd);

	pid = fork();

	if (pid == 0) 
	{
		close(fd[0]);

		write(fd[1], "abc", 3);
		write(fd[1], "def", 3);
		write(fd[1], "ghi", 3);
	}
	else 
	{
		sleep(1);//Si queremos que ponga mas en la pipe

		int s = read(fd[0], buf, lenght);
		int s//para quitar lo sobrante
		buf[s] = '/0';
		std::cout << buf;
	}

}

void main() 
{

}