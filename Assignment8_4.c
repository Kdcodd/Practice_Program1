#include<stdio.h>

int FactorialOfNumber(int iNo)
{
   int iCnt = 0;
   int iFact = 1;
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
       iFact = iFact * iCnt;
       
   }
   return iFact;
}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    int iRet = 0;
    
    iRet = FactorialOfNumber(iValue);
    printf("Factoial of given number is %d\n",iRet);
    
    return 0;
}