#include<stdio.h>

int ReverseR(int No)
{
	int iDigit = 0;
	static int iRev =0; 
	
	if(No != 0)
	{
	     iDigit  = No % 10;
		 iRev = (iRev * 10) + iDigit;
		 No = No / 10;
		 ReverseR(No);
		
	}

   return iRev;
}


int main()
{
 	int No = 0;
	printf("Enter the number\n");
	scanf("%d",&No);
	
	int iRet = ReverseR(No);
	printf("Number after reversing is : %d\n",iRet);
   
   return 0;	
}