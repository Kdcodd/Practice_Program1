#include<stdio.h>

int DisplayLargestDigit(int No)
{
	int iDigit = 0;
	static int iMax = 0;
	if(No != 0)
	{
		iDigit = No % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
		}
		No = No / 10;
		DisplayLargestDigit(No);
	}
	
    return iMax;	
}




int main()
{
	int iNo = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	int iRet = DisplayLargestDigit(iNo);
	printf("Largest digit in %d is %d",iNo,iRet);
	
	return 0;
}