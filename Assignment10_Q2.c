#include<stdio.h>
#include<stdbool.h>
bool  DisplayReverse(int iNo)
{
   int iDigit=0;
   while(iNo>0)
   {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return true;
        }
        
        iNo=iNo/10;
        return false;

   }  
    
}
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet= DisplayReverse(iValue);
    if(bRet==true)
    {
        printf("Zero is present\n");
    }
    else
    {
        printf("Zero is not present\n");

    }


    return 0;
}