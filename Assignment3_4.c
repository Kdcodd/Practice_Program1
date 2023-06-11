#include<stdio.h>
#include<conio.h>

char ConvertUpperToLowerCase(char cUprX)
{
   char cAscii1 = '\0';
   cAscii1 = cUprX + 32;
   
   return cAscii1; 
}

char ConvertLowerToUpperCase(char cLwrX)
{
    char cAscii2 = '\0';
    cAscii2 = cLwrX - 32;
   
    return cAscii2;
}
int main()
{
    char cUpr = '\0';
    char cLwr = '\0';
    char cRet1 = '\0';
    char cRet2 = '\0';
    
    printf("Enter the character in upper case and lower case :\n");
    scanf("%c %c",&cUpr,&cLwr);
   
    cRet1 = ConvertUpperToLowerCase(cUpr);
    cRet2 = ConvertLowerToUpperCase(cLwr);
    
    printf("%c in lowercase is %c\n",cUpr,cRet1);
    printf("%c in uppercase is %c\n",cLwr,cRet2);

    return 0;
}