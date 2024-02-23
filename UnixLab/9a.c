#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	int f1 = 0, f2 = 0;

	char buf[50];

	long int n = 0;

	f1 = open(argv[1], O_RDONLY);
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0700);

	if(f1 == -1 || f2 == -1)
	{
		perror("File open error\n");
		exit(1);
	}

	n = read(f1, buf, 50);
	while(n > 0)
	{
		if(write(f2, buf, n) != n)
		{
			perror("Problem in writing\n");
			exit(3);
		}
		n = read(f1, buf, 50);
	}

	if(n == -1)
	{
		perror("Problem in reading\n");
		exit(2);
	}

	close(f2);
	return 0;
}
