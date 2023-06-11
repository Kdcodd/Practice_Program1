#include<stdio.h>

void DisplayR()
{
	static int i = 1;
	static int Temp = 5;
	if(i <= 5)
	{
		printf("%d\t",Temp);
		i++;
		Temp--;
		DisplayR();
	}
	
}

int main()
{
	
	DisplayR();
	
   return 0;	
}