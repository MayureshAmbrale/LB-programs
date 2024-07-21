#include<stdio.h>

int MultiplicationOfFactors(int iNo)
{
    int iCnt=0;
    int iMUl=1;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMUl=iMUl*iCnt;
            
        }
    }
    return iMUl;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet=MultiplicationOfFactors(iValue);

    printf("%d is MUltiplication of Factors\n",iRet);

    return 0;
}