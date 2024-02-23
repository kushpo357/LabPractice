#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
#include<dirent.h>

int main()
{
	DIR *dp;
	struct dirent *dir;
	
	dp = opendir(".");

	if(dp)
	{
		dir = readdir(dp);
		while(dir != NULL)
		{
			printf("%s\n", dir->d_name);
			dir = readdir(dp);
		}

		closedir(dp);
	}
	return 0;
}
