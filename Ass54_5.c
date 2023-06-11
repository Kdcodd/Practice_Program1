#include<stdio.h>

void DisplayR()
{
	static int i = 1;
	static char ch = 'a';
	if(i <= 5)
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