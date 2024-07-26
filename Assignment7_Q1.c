#include<stdio.h>
void DisplayPattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t");
    }
}
int main()
{
    int iValue=0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);
    return 0;
}