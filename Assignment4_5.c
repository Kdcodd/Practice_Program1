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
int SumFactors(int iNoX)
{
    int iFact = 0;
    int iSumFact = 0;
    for(iFact= 1; iFact <= iNoX/2; iFact++)
    {
        if(iNoX % iFact == 0)
        {
           iSumFact = iSumFact + iFact;
        }
    }
    return iSumFact;
}
int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    int iRetNonFact = 0;
    int iRetFact = 0;
    int iDef = 0;
   
    iRetFact = SumFactors(iValue);
    iRetNonFact = SumNonFactors(iValue);
    
    
    iDef = iRetFact - iRetNonFact;
    printf("Difference between summation of its factors and non factors are : %d\n",iDef);
   

    return 0;
}