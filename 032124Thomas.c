#include <stdio.h>
#include <ctype.h>
int main()
{
    char data[100];
    char *p;
    printf("Name : ");
    fflush(stdin);
    gets(data);
    printf("Output1 : ");
    for(p=data;*p!='\0';p++)
    {
        if(*p==' ');
        else if(*(p-1)==' '||p==data) printf("%c",toupper(*p));
        else printf("%c",tolower(*p));
    }
    printf("\nOutput2 : ");
    for(--p;p!=data-1;p--)
    {
        printf("%c",toupper(*p));
    }
}