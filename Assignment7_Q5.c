#include<stdio.h>
int  FindFactorialDiff(int iNo)
{
   int iCnt=0;
   int iFactE=1;
   int iFactO=1;
   if(iNo<0)
    {
        iNo=-iNo;
    }
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
    if(iCnt%2==0)
    {
        iFactE=iFactE*iCnt;
    }
    else{
        iFactO=iFactO*iCnt;
    }
   }
   return iFactE-iFactO;
    
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

   iRet= FindFactorialDiff(iValue);

   printf("%d is multiplication of even factorial\n",iRet);
    return 0;
}