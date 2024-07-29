#include<stdio.h>

void RangeDisplay(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
        printf("Invalid \n");
        return ;
    }
    int iCnt=0;
    for(iCnt=iNo2;iCnt>=iNo1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter renge 1st number:\n");
    scanf("%d",&iValue1);
    printf("Enter renge 2nd number:\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return 0;
}