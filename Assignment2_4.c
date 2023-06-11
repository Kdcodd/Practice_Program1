#include<stdio.h>
void DisplayFirstNumberSecondNumberTimes(int iVal1, int iVal2)
{
    int iCnt = 0;
   
    for(iCnt = 1; iCnt <= iVal2; iCnt++)
    {
        printf("%d\n",iVal1);
    }
    
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    printf("Enter the two number : \n");
    scanf("%d",&iNo1);
    scanf("%d",&iNo2);
    DisplayFirstNumberSecondNumberTimes(iNo1,iNo2);

    return 0;
}