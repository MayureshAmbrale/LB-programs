#include<stdio.h>
float  Distance(float iNo)
{
   
   if(iNo<0)
    {
        iNo=-iNo;
    }
   
   return iNo*1000;
    
}
int main()
{
    float fValue=0;
    float fRet=0;
    printf("Enter kilometer  :\n");
    scanf("%f",&fValue);

   fRet= Distance(fValue);

   printf("%f in meter\n",fRet);
    return 0;
}