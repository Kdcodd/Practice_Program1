#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int fd = 0,Length  = 0,Count = 0;
	char Fname[20],Data[20];
	
	printf("Enter the file name to open the file\n");
	scanf("%s",Fname);
	fd = open(Fname,O_RDWR);
	
	printf("Enter how many bytes that you want to read\n");
	scanf("%d",&Count);
	
	read(fd,Data,Count);
	
	printf("Data is successfully read upto %d bytes from initial position\n",Count);
     	
	
  return 0;	
}