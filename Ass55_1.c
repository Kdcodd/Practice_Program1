#include<stdio.h>

void DisplayR(int No)
{
	static int i = 1; 
	if(i <= 5)
	{
		printf("%d\t",No);
		printf("*\t");
		i++;
		No--;
		DisplayR(No);
	}
}

int main()
{
	int No = 0;
	printf("Enter the number\n");
	scanf("%d",&No);
	
	DisplayR(No);
	
	return 0;
}