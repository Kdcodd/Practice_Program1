#include<stdio.h>

typedef unsigned int UINT;
UINT TOGGLEBit(UINT No)
{ 
	UINT iMask = 0X10000001;
	UINT Result = 0;
	Result = iMask ^ No;
	return Result;
}
int main()
{
	UINT iNo =0,iPos = 0,iRet = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	iRet = TOGGLEBit(iNo);
	printf("Updated number is %d\n",iRet);
	
	return 0;
}