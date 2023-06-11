#include<stdio.h>

void DisplayR(int No)
{
	static int i = 1;
	static char ch = 'a';
	if(i <= No)
	{
		 printf("%c\t",ch);
		 i++;
		 ch++;
		 DisplayR(No);
	}
	
}
int main()
{
	
	 int No =0;
     printf("Please enter number\n");	
	 scanf("%d",&No); 
	    
     DisplayR(No);
   
     return 0;	
}