#include<stdio.h>

void CheckEqualNumber(int iNo1,int iNo2)
{
  if(iNo1 == iNo2)
  {
    printf("Numbers are equal");

  }
  else
  {
    printf("Numbers are not equal");
  }
}

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  printf("Enter the two number :");
  scanf("%d%d",&iValue1,&iValue2);

  CheckEqualNumber(iValue1,iValue2); 

  return 0;
}