#include <stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCountOdd = 0;

    // if(iNo < 0)
    // {
    //     iNo=-iNo;
    // }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 1)
        {
            iCountOdd++;
        }
        iNo = iNo / 10;
    }

    return iCountOdd;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("Number of Odd digits from %d is : %d\n", iValue, iRet);

    return 0;
}