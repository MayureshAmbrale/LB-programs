#include<stdio.h>
double  FhtoCs(double dNo)
{
    float dCs=0.0;
    dCs=(dNo-32)*(5/9);

   return dCs;
    
}
int main()
{
    double dValue=0.0;
    double dRet=0.0;
    printf("Enter temp in fahrenheit  :\n");
    scanf("%f",&dValue);

   dRet= FhtoCs(dValue);

   printf("%f is temp in celsius \n",dRet);
    return 0;
}