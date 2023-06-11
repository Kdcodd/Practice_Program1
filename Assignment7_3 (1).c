#include<stdio.h>

void DisplayNumberLine(int iNo)
{
    int iCnt = -iNo;
    while(iCnt <= iNo)
    {
        printf("%d",iCnt);
    
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    DisplayNumberLine(iValue);
    
    return 0;
}