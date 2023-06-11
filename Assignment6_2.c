#include<stdio.h>
#include<stdbool.h>

bool CheckGreaterNumber(int iNo)
{
  if(iNo > 100)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int iValue = 0;

  printf("Enter the number\n");
  scanf("%d",&iValue);

  bool bRet = false;
  bRet = CheckGreaterNumber(iValue);

  if(bRet == true)
  {
    printf("%d is greater number\n",iValue);
  }
  else
  {
    printf("%d is smaller number",iValue);
  }

  return 0;
}