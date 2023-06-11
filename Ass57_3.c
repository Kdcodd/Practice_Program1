#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	char Data[20];
	int fd = 0,Length = 0;
	
	printf("Enter the file name that you want to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is successfully opened with fd : %d\n",fd);
	}
	
	while((Length = read(fd,Data,sizeof(Data))) != 0)
	{
		write(1,Data,Length);
	}
	
	close(fd);
	printf("\nFile gets closed successfully\n");
	
   return 0;	
}
