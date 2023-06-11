#include<stdio.h>

int CountCharacter(char *str, int No)
{
	static int i = 1;
	static int Count = 0;
	if(i <= No)
	{
		if(((*str >= 'A') && (*str <= 'Z')) || ((*str >='a') && (*str <= 'z')))
		{
			Count++;
		}
		i++;
		str++;
		CountCharacter(str,No);
	}
    return Count;	
}

int main()
{
	int No = 0;
	int iRet = 0;
	printf("Enter the size of string\n");
	scanf("%d",&No);
	
	char str[No];
	printf("Enter the string\n");
	scanf(" %[^ \n]s",str);
	
    iRet = CountCharacter(str,No);	
    printf("Number of character in string is %d",iRet);
  	
   return 0;	
}