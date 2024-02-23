#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>

int main()
{
	char dirname[10];
	DIR *dp;
	struct dirent *dir;

	printf("Enter a directory name : ");
	scanf("%s", dirname);

	dp = opendir(dirname);

	if(dp == NULL)
	{
		perror("Cannot find directory\n");
		exit(-1);
	}

	dir = readdir(dp);

	while(dir != NULL)
	{
		printf("%s\n", dir->d_name);
		dir = readdir(dp);
	}

	closedir(dp);

	return 0;
}
