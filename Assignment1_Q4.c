#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(iNo%5==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
    int iValue=0;
    bool iRet=false;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=CheckDivisible(iValue);
    if(iRet==true)
    {
        printf("%d is divisible by 5",iValue);
    }
    else
    {
        printf("%d is not divisible by 5",iValue);
    }

    return 0;
}