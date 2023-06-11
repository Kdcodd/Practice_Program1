#include<stdio.h>

void DisplayR(int No)
{
	static int i = 1;
	if(i <= No)
	{
		printf("%d\t",i);
		i++;
		DisplayR(No);
	}
	
}

int main()
{
	int iNo = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	DisplayR(iNo);
	
   return 0;	
}