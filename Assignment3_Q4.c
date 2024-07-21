#include<stdio.h>

char ConvertCharacter(char c)
{
    char character ='\0';
    if(c>='A' && c<='Z')
    {
        character=c + 32;
        return character;
    }
    else if(c>='a'&& c<='z')
    {
        character=c - 32;
        return character;
    }

}

int main()
{
    char cValue='\0';
    char cRet='\0';
    printf("Enter character :\n");
    scanf("%c",&cValue);

    cRet=ConvertCharacter(cValue);
    printf("%c converted to %c ",cValue,cRet);

    return 0;
}