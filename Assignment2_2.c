#include<stdio.h>
void DisplayAsteresisOnScreen(int iVal)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iVal; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iNo =0;
    printf("Enter the number :");
    scanf("%d",&iNo);
    DisplayAsteresisOnScreen(iNo);

    return 0;
}