#include<stdio.h>

void DisplayEvenFactorX(int iVal)
{
    int iCnt = 0;
    if(iVal <= 0)
    {
        iVal = -iVal;
    }
    for(iCnt = 1; iCnt <= (iVal/2); iCnt++)
    {
        if((iVal % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iNo = 0;
    printf("Enter the number\n");
    scanf("%d",&iNo);
    DisplayEvenFactorX(iNo);

    return 0;
}