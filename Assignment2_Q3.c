#include<stdio.h>
#include<stdbool.h>

bool CheckNumber(int iNo)
{
    if(iNo<10)
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
    bool bRet =0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet=CheckNumber(iValue);
    if(bRet==true)
    {
       printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }

    return 0;
}