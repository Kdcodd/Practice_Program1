#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT Pos1,UINT Pos2)
{
	bool bFlag  = false;
	UINT iMask = 0;
	UINT iMask1 = 0X00000001;
	UINT iMask2 = 0X00000001;
	iMask1 =  iMask1<<(Pos1-1);
	iMask2 = iMask2<<(Pos2-1);
	iMask = iMask1 | iMask2;
    UINT Result = 0;
    Result = iMask & iNo;
	if(Result == iMask)
	{
		bFlag = true;
	}
	else 
	{
		bFlag = false;
	}

    return bFlag;
}

int main()
{
	int iNo = 0,iPos1 = 0,iPos2 = 0;
	bool bRet = false;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	printf("Enter the position of bits\n");
	scanf("%d%d",&iPos1,&iPos2);
 
    bRet = CheckBit(iNo,iPos1,iPos2);
	if(bRet == true)
	{
		printf("True\n");
	}
	else 
	{
		printf("False\n");
	}

	return 0;
}