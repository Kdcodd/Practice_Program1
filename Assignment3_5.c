#include<stdio.h>
#include<stdbool.h>
#include<conio.h>

bool CheckVowels(char kh)
{
    char a = '\0';
    char e = '\0';
    char i = '\0';
    char o = '\0';
    char u = '\0';
    
    switch(kh)
    {
       case a:
       return true;
       break;
       case e:
       return true;
       break;
       case i:
       return true;
       break;
       case o:
       return true;
       break;
       case u:
       return true;
       break;
       default:
       return false;
       break;
    }

}
int main()
{
    char ch = '\0';
    printf("Enter the character :\n");
    scanf("%c",&ch);
    bool bRet = false;
    bRet = CheckVowels(ch);
    if(bRet == true)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}