#include<stdio.h>

void PrintMUlti(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
}

int main()
{
    int iValue =0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    PrintMUlti(iValue);
    return 0; 
}