#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

int main()
{
	char Fname[20];
	char Data[200];
	int fd = 0,Length = 0,Size = 0;
	
	printf("Enter the file name that you want to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR | O_APPEND);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is successfully opened with fd : %d\n",fd);
	}
	
	printf("Enter the data that you want to write\n");
	scanf(" %[^\n]s",Data);
	Length = strlen(Data);
	
	write(fd,Data,Length);
	
	close(fd);
	printf("\nFile gets closed successfully\n");
	
   return 0;	
}
