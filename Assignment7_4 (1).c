#include<stdio.h>

void DisplayOddNumbers(int iNo)
{
    int iCnt = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    DisplayOddNumbers(iValue);
    
    return 0;
}