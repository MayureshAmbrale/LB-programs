#include<stdio.h>
float  ConvertToSquremeter(float iNo)
{
   float fArea=0.0;
   fArea=iNo*0.0929;

   return fArea;
    
}
int main()
{
    float fValue=0;
    float fRet=0;
    printf("Enter Area in squre feet  :\n");
    scanf("%f",&fValue);

   fRet= ConvertToSquremeter(fValue);

   printf("%f\n",fRet);
    return 0;
}