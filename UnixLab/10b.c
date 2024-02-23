#include<stdio.h>
#include<string.h>

int main()
{
	char filename[10], pattern[10], temp[200];
	FILE *fp;

	printf("Enter the file name\n");
	scanf("%s", filename);

	printf("Enter pattern to be searched\n");
	scanf("%s", pattern);

	fp = fopen(filename , "r");

	while(!feof(fp))
	{
		fgets(temp, 200, fp);

		if(strstr(temp, pattern))
		{
			printf("%s", temp);
		}
	}

	fclose(fp);

	return 0;
}
