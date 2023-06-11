#include<stdio.h> 

void DisplayNumber(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("%d",iCnt);
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    DisplayNumber(iValue);
    
    return 0;
}