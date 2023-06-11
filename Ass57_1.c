#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	char Fname[20];
	int fd = 0;
	
	printf("Enter the file name that open the file in read mode\n");
	scanf("%s",Fname);
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file in read mode\n");
		return -1;
	}
	else
	{
		printf("File is successfully created with fd : %d\n",fd);
	}
	
    return 0;	
}