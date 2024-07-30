#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCountEven = 0;

    // if(iNo < 0)
    // {
    //     iNo=-iNo;
    // }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iCountEven++;
        }
        iNo = iNo / 10;
    }

    return iCountEven;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("Number of Even digits from %d is : %d\n", iValue, iRet);

    return 0;
}