#include<stdio.h>

int DifferanceOfFactAndNonfact(int iNo)
{
    int iCnt=0;
    int iSumF=0;
    int iSumNF=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iSumNF=iSumNF+iCnt;
            
        }
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSumF=iSumF+iCnt;
            
        }
    }
    return iSumF-iSumNF;  
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet=DifferanceOfFactAndNonfact(iValue);
    printf("Difference between Sum of Factors and Nonfactors is :%d\n",iRet);

    return 0;
}