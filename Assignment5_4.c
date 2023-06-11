#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iNonFact = 0;
    int iSumNonFact = 0;
    for(iNonFact = 1; iNonFact <= iNo/2; iNonFact++)
    {
        if(iNo % iNonFact != 0)
        {
           iSumNonFact = iSumNonFact + iNonFact;
        }
    }
    return iSumNonFact;
}


int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    int iRetNonFact = 0;

    iRetNonFact = SumNonFactors(iValue);
    printf("Summation of it nonfactors are : %d\n",iRetNonFact);
    
    return 0;
}