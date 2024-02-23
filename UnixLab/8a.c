#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
	int fd1 = 0, fd2 = 0;
	char buf[50];

	fd1 = open("t12.txt", O_RDWR, 0);

	if(fd1 < 0)
	{
		printf("File open error\n");
		return 0;
	}

	fd2 = dup(fd1);

	read(fd1, buf, 12);

	lseek(fd2, 0L, SEEK_END);

	write(fd2, buf, 12);

	return 0;
}
