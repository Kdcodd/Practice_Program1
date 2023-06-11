#include<stdio.h>

void DisplayEvenFactors(int iVal)
{
    int iCnt = 0;
    for(iCnt = 2; iCnt<=(iVal/2); (iCnt = iCnt + 2))
    {
        if((iVal % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number:\n");
    scanf("%d",&iNo);
    DisplayEvenFactors(iNo); 

    return 0;
}