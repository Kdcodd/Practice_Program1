#include<stdio.h>

float ObtainPercentage(int iNo1, int iNo2)
{
  float fPercentage = 0.0;
  fPercentage = ((iNo2 * 100)/iNo1);
  return fPercentage;
}

int main()
{
  int iValue1 = 0, iValue2 = 0;
  float fRet = 0.0;
  printf("Enter the total marks :");
  scanf("%d",&iValue1);
  printf("Enter the obtained marks :");
  scanf("%d",&iValue2);
  
  fRet = ObtainPercentage(iValue1,iValue2);

  printf("Percentage is : %f",fRet);

  return 0;
}