#include<stdio.h>

int DisplayRSumDigit(int No)
{
	static int iSum = 0;
    static int iDigit = 0;
	 
	if(No != 0)
	{
		iDigit = No % 10;
		iSum = iSum + iDigit;
		No = No/10;
		
         DisplayRSumDigit(No);      		
	}
	return iSum;
}

int main()
{
	int No = 0;
	printf("Enter the number\n");
	scanf("%d",&No);
	
	int iRet = DisplayRSumDigit(No);
	printf("Addition is %d\n",iRet);
	
	
	return 0;
}