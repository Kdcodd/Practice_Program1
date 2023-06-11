#include<stdio.h>

void Display(iNo)
{
	static int i = 1;
    if(i <= iNo)
    {
    	printf("*\t");
        i++;
        Display(iNo);
    }
}


int main()
{
	int iNo = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	Display(iNo);
	return 0;
}