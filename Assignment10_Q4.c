// 4. Accept N numbers from user and return frequency of 11 form it.

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]  ==  11)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }


    printf("Enter elements : \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d\n", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Frequency(ptr, iSize);

    printf("Frequency is : %d\n",iRet);

    free(ptr);

    return 0;
}