#include<stdio.h>

void DisplayFactorsDecreasing(int iNo)
{
    int iCnt = 0;
    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayFactorsDecreasing(iValue);

    return 0;
}