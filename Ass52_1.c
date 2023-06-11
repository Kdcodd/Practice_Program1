#include<stdio.h>
typedef unsigned int UINT;

int CountONBit(int iNo)
{
	int iDigit = 0,iCount = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 2;
		if(iDigit == 1)
		{
			iCount++;
		}
		iNo = iNo / 2;
	}
	return iDigit;
}
int main()
{
	UINT iNo = 0,iret = 0;
	printf("______________________\n");
    printf("Enter the number\n");
	scanf("%d",&iNo);
		
	iret = CountONBit(iNo);		
	printf("There are total %d ON bits in %d\n",iret,iNo);
	printf("______________________\n");	
	return 0;
}