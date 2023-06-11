#include<stdio.h>

void DisplayR(int No)
{
	static int i = 1;
	static int Temp = 5;
	if(i <= No)
	{
		printf("%d\t",Temp);
		i++;
		Temp--;
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