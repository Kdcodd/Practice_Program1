#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleRange(UINT iNo, UINT iStart, UINT iEnd)
{
	UINT iMask = 0;
	UINT iMask1 = 0XFFFFFFFF;
	UINT iMask2 = 0XFFFFFFFF;
    UINT Result = 0;
	iMask1 = iMask1 << (iStart-1);
	iMask2 = iMask2 >> (32-iEnd);
    iMask = iMask1 & iMask2;
	Result = iNo ^ iMask;
    return Result;
}

int main()
{
	int iNo = 0,iStart = 0, iEnd = 0,iRet = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

    printf("Enter the range\n");
	scanf("%d%d",&iStart,&iEnd);

    iRet = ToggleRange(iNo,iStart,iEnd);
    printf("Upadated number is : %d\n",iRet);

	return 0;
}