#include<stdio.h>

void DisplayNumber(int iNo1,int iNo2)
{
    
   int iCnt=0;
   for(iCnt=1;iCnt<=iNo2;iCnt++)
   {
        printf("%d\t",iNo1);
   }
    printf("\n");
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter the number \n");
    scanf("%d",&iValue1);
    printf("Enter the number \n");
    scanf("%d",&iValue2);

    DisplayNumber(iValue1,iValue2);
    return 0;
}