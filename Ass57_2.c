#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	char Fname[20];
	int fd = 0;
	
	printf("Enter the file name that create the file\n");
	scanf("%s",Fname);
	fd = creat(Fname,0777);
	if(fd == -1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	else
	{
		printf("File is successfully created with fd : %d\n",fd);
	}
	
    return 0;	
}