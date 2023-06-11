#include<stdio.h>

void DisplayHelloDemo(int iVal)
{
    if(iVal < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }

}

int main()
{
    int iNo = 0;
    printf("Enter the number :");
    scanf("%d",&iNo);

    DisplayHelloDemo(iNo);
    return 0;
}