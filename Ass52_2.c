#include<stdio.h>

typedef unsigned int UINT;

void Display(UINT iNo1,UINT iNo2)
{
	UINT i = 1;
	UINT iDigit = 0;
	UINT Result = 0;
	Result = iNo1 & iNo2;
	while(Result != 0)
	{
		iDigit = Result % 2;
		if(iDigit == 1)
		{
			printf("%d\n",i);
		}
		Result = Result / 2;
		i++;
	}
}

int main()
{
	int iNo1 = 0,iNo2 = 0;
	printf("Enter the  two number\n");
	scanf("%d%d",&iNo1,&iNo2);

	Display(iNo1,iNo2);

	return 0;
}