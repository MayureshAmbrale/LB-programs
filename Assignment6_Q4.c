#include<stdio.h>
void DisplayTable(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;

    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d\t",iNo*iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);
    return 0;
}