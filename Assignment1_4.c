#include<stdio.h>
#include<stdbool.h>

bool CheckDivisibleByFive(int iVal)
{
    if(iVal % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo = 0;
    bool bRet = false;
    printf("Enter the number :\n");
    scanf("%d",&iNo);
    
    bRet = CheckDivisibleByFive(iNo);
   
    if(bRet == true)
    {
        printf("Number is divisible by five");
    }
    else 
    {
        printf("Number is not divisible by five");
    }

    return 0;
}