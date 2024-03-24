#include <stdio.h>
#include <ctype.h>
int main()
{
    char input[256];
    char *pc;
    printf("Input : ");
    fflush(stdin);
    gets(input);
    for(pc=input;*pc!='\0';pc++);
    for(--pc;pc>=input;pc--)
    {
        printf("%c",toupper(*pc));
    }
}