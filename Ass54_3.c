#include<stdio.h>

void DisplayR()
{
	static int i = 1;
	static char ch = 'A';
	if(i <= 6)
	{
		 printf("%c\t",ch);
		 i++;
		 ch++;
		 DisplayR();
	}
	
}
int main()
{
	
	    DisplayR(); 
     return 0;	
}