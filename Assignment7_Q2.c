#include<stdio.h>
int  DollerToINR(int iNo)
{
   int iCnt=0;
   int iCon=0;
   if(iNo<0)
    {
        iNo=-iNo;
    }
    iCon=70*iNo;

   
   return iCon;
    
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

   iRet= DollerToINR(iValue);

   printf("%d \n",iRet);
    return 0;
}