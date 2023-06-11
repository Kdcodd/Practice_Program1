#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
	bool bFlag = false;
	UINT iMask = 0X00000900;
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
	int iNo = 0;
	bool bRet = false;
	printf("Enter the number\n");
	scanf("%d",&iNo);
 
    bRet = CheckBit(iNo);
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