#include<stdio.h>

int  FactorialR(int No)
{
	static int i = 1;
	static int iMult = 1;
	if(i <= No)
	{
		iMult = i * iMult;
		i++;
		FactorialR(No);
	}
	return iMult;
}




int main()
{
	int No = 0,iRet = 0;
	printf("Enter the number\n");
	scanf("%d",&No);
	
	iRet = FactorialR(No);
	printf("Factorial of %d is %d",No,iRet);
	
	return 0;
}