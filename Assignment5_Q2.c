#include<stdio.h>

void Print(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue =0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    Print(iValue);
    return 0; 
}