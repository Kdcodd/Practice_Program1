#include<stdio.h>

void CheckEvenOrOdd(int iVal)
{
    if(iVal % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

}

int main()
{
    int iNo = 0;
    printf("Enter the number :\n");
    scanf("%d",&iNo);
    CheckEvenOrOdd(iNo);

    return 0;
}