#include<stdio.h>
float  FindArea(float iNo)
{
   float iArea=0;
   float pi=3.14;
   if(iNo<0)
    {
        iNo=-iNo;
    }
    iArea=pi*iNo*iNo;
   
   return iArea;
    
}
int main()
{
    float fValue=0;
    float fRet=0;
    printf("Enter radius :\n");
    scanf("%f",&fValue);

   fRet= FindArea(fValue);

   printf("%f is multiplication of even factorial\n",fRet);
    return 0;
}