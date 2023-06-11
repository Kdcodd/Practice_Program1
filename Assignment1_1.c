#include<stdio.h>

int Division(int iVal1 , int iVal2)
{
    int iOutput = 0;
    iOutput = iVal2 / iVal1;
    return iOutput;
}

int main()
{
    int iNo1 = 10;
    int iNo2 = 20;
    int iRet = 0;
    iRet = Division(iNo1,iNo2);
    printf("Division of two number is %d\n:", iRet);
    
    return 0;
}