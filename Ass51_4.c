#include<stdio.h>

typedef unsigned int UINT;
UINT TOGGLEBit(UINT No, UINT Pos)
{
	int iMask = 0X00000001;
	int Result = 0;
	iMask = iMask << (Pos-1);
	Result = iMask ^ No;
	return Result;
}
int main()
{
	int iNo =0,iPos = 0,iRet = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	printf("Enter the bit position\n");
	scanf("%d",&iPos);
	
	iRet = TOGGLEBit(iNo,iPos);
	printf("Updated number is %d\n",iRet);
	
	return 0;
}