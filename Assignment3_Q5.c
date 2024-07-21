#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
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
    char cValue='\0';
    bool bRet='\0';
    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);
    if(bRet==true)
    {
        printf("%c is vowel",cValue);
    }
    else
    {
        printf("%c is not vowel",cValue);
    }
    return 0;
}