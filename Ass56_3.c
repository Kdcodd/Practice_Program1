#include<stdio.h>
#include<string.h>

int CountSmallCharacter(char *str)
{
	static int Count = 0;
	if(*str != '\0')
    {
    	if((*str >= 'a') && (*str <= 'z'))
    	{
    		Count++;
    	}
        str++;
        CountSmallCharacter(str);          
    }
       
   return Count; 
}


int main()
{
	char str[20];
	printf("Enter the string\n");
	scanf("%[^\n]s",str);
	
	int iLength = strlen(str);
	printf("Length of string is : %d\n",iLength);
	int iRet = CountSmallCharacter(str);
	printf("Small Character in given string are : %d\n",iRet);
	
	return 0;
}