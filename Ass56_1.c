#include<stdio.h>
#include<string.h>

int CountWhiteSpace(char *str)
{
	static int Count = 0;
	if(*str != '\0')
    {
    	if(*str == ' ')
    	{
    		Count++;
    	}
        str++;
        CountWhiteSpace(str);          
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
	int iRet = CountWhiteSpace(str);
	printf("White spaces in given string are : %d\n",iRet);
	
	return 0;
}