// 3. Accept N numbers from user check whether that numbers
// contains 11 in it or not.

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckElement(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    BOOL bRet = FALSE;

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

    bRet = CheckElement(ptr, iSize);

    if (bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(ptr);

    return 0;
}