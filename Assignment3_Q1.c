#include<stdio.h>

void DisplayEvenNumbers(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",2*iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue=0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    DisplayEvenNumbers(iValue);
    return 0;
}