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
	
	while((Length = read(fd,Data,sizeof(Data))) != 0)
	{
		for(int  i = 0; i < sizeof(Data); i++)
		{
			if(Data[i] >= 'A' && Data[i] <= 'Z')
			{
				Count++;
			}
		}
	}
	
	printf("Number of capital letters are : %d\n",Count);
	
  return 0;	
}