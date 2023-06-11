#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int fd = 0,Length  = 0,Count = 0;
	char Fname[20],Data[20],ch = '\0';
    	
	printf("Enter the file name to open the file\n");
	scanf("%s",Fname);
	fd = open(Fname,O_RDWR);
	
	printf("Enter the character to search\n");
	scanf(" %c",&ch);
	
	while((Length = read(fd,Data,sizeof(Data))) != 0)
	{
		for(int  i = 0; i < sizeof(Data); i++)
		{
			if(Data[i] == ch)
			{
				Count++;
			}
		}
	}
	
	printf("Number of occurance  of %c is  : %d\n",ch,Count);
	
  return 0;	
}