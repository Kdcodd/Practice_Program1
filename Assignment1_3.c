#include<stdio.h>

int FiveToOneNumberDisplay()
{
    int iCnt = 0;
    for(iCnt = 5; iCnt > 0; iCnt--)
    {
        printf("%d\n",iCnt);
    }
    return 0;
}
int main()
{
    FiveToOneNumberDisplay();
    return 0;
}