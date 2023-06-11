#include<stdio.h>

void CheckGreaterSmaller(int iNo)
{
    if(iNo < 50)
    {
        printf("%d is smmaller number\n",iNo);
    }
    if((iNo > 50) && (iNo < 100))
    {
        printf("%d is medium number\n",iNo);
    }
    if(iNo > 100)
    {
        printf("%d is greater number\n",iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    CheckGreaterSmaller(iValue);
    
    return 0;
}