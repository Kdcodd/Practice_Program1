#include<stdio.h>

int MultiplicationFactors(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
       if(iNo % iCnt == 0)
       {
          iMult = iMult * iCnt;
       }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    int iRet = 0;
    iRet = MultiplicationFactors(iValue);
    printf("Multiplication of factors are %d \n ",iRet);

    return 0;
}