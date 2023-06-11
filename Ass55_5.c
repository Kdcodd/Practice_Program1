#include<stdio.h>

int  MultDigitsR(int No)
{
	int iDigit = 0;
	static int i = 1;
	static int iMult = 1;
	if(No != 0)
	{
		iDigit = No % 10;
		iMult = iDigit * iMult;
	    No = No/10;
        MultDigitsR(No);	        	
	}
	return iMult;
}




int main()
{
	int No = 0,iRet = 0;
	printf("Enter the number\n");
	scanf("%d",&No);
	
	iRet = MultDigitsR(No);
	printf("Multiplication of all digits in %d is %d",No,iRet);
	
	return 0;
}