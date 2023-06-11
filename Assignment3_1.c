#include<stdio.h>

void CheckEvenOfGivenNumber(int iVal)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iVal; iCnt++)
    {
        if(iCnt % 2 == 0 )
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number : \n");
    scanf("%d",&iNo);
    CheckEvenOfGivenNumber(iNo);

    return 0;
}