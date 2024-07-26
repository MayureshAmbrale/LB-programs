#include<stdio.h>
float  FindArea(float iNo1,float iNo2)
{
   float iArea=0;
   
   
    iArea=iNo1*iNo2;
   
   return iArea;
    
}
int main()
{
    float fValue1=0;
    float fValue2=0;
    float fRet=0;
    printf("Enter height :\n");
    scanf("%f",&fValue1);
    printf("Enter width :\n");
    scanf("%f",&fValue2);

   fRet= FindArea(fValue1,fValue2);

   printf("%f is multiplication of even factorial\n",fRet);
    return 0;
}