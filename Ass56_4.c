#include<stdio.h>

int DisplaySmallestDigit(int No)
{
	static int iDigit = 0;
	static int iMin = 9;
	if(No != 0)
	{
		iDigit = No % 10;
		if(iDigit < iMin)
		{
			iMin = iDigit;
		}
		No = No / 10;
		DisplaySmallestDigit(No);
	}
	
    return iMin;	
}




int main()
{
	int iNo = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	int iRet = DisplaySmallestDigit(iNo);
	printf("Smallest digit in %d is %d",iNo,iRet);
	
	return 0;
}