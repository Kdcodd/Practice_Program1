#include<stdio.h>

int MultiplicationOfNumber(int iNo1, int iNo2, int iNo3)
{
  int iMult = 0;
  iMult = iNo1 * iNo2 * iNo3;
  return iMult;
}

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  int iValue3 = 0;
  printf("Enter the three number");
  scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
  int iRet = 0;
  iRet = MultiplicationOfNumber(iValue1,iValue2,iValue3);

  printf("Multilication of three number is %d\n",iRet);

  return 0;
}