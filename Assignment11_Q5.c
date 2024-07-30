#include <stdio.h>

int CountDiff(int iNo)
{
    int iDiff = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iEvenSum = EvenSum(iNo);
    iOddSum = OddSum(iNo);

    iDiff = iEvenSum - iOddSum;

    return iDiff;
}

int EvenSum(int iNo1)
{
    int iDigit = 0;
    int iSumE = 0;

    while (iNo1 != 0)
    {
        iDigit = iNo1 % 10;

        if ((iDigit % 2) == 0)
        {
            iSumE = iSumE + iDigit;
        }

        iNo1 = iNo1 / 10;
    }

    return iSumE;
}

int OddSum(int iNo2)
{
    int iDigit = 0;
    int iSumO = 0;

    while (iNo2 != 0)
    {
        iDigit = iNo2 % 10;

        if ((iDigit % 2) != 0)
        {
            iSumO = iSumO + iDigit;
        }

        iNo2 = iNo2 / 10;
    }

    return iSumO;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference between even and digits from %d is : %d\n", iValue, iRet);

    return 0;
}