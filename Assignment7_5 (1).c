#include<stdio.h>

void DisplayMultiples(int iNo)
{
    int iCnt = 0;
    int iMult = 5;
    int iFact = 0;
    for(iCnt = 1; iCnt <= iMult; iCnt++)
    {
        iFact = iCnt * iNo;
        printf("%d\n",iFact);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    DisplayMultiples(iValue);
    
    return 0;
}