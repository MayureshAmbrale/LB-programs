
#include<stdio.h>

int  DisplaySum(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
        printf("Invalid \n");
        return 0;
    }
    if(iNo1<0||iNo2<0)
    {
        return 0;
    }
    int iCnt=0;
    int iSum=0;
    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;
    printf("Enter renge 1st number:\n");
    scanf("%d",&iValue1);
    printf("Enter renge 2nd number:\n");
    scanf("%d",&iValue2);

    iRet=DisplaySum(iValue1,iValue2);
    printf("Sum is :%d",iRet);
    return 0;
}