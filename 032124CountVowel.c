#include <stdio.h>
#include <ctype.h>
int main()
{
    char data[100];
    char *p;
    int vowel[5] = {0};
    char a[5] = {'a', 'e', 'i', 'o', 'u'};
    printf("Input : ");
    fflush(stdin);
    gets(data);
    p = data;
    for (p = data; *p != '\0'; p++)
    {
        switch (*p)
        {
        case 'a':
            vowel[0]++;
            break;
        case 'e':
            vowel[1]++;
            break;
        case 'i':
            vowel[2]++;
            break;
        case 'o':
            vowel[3]++;
            break;
        case 'u':
            vowel[4]++;
            break;
        }
    }
    for (int i = 0; i < 5; i++)
        printf("%c => %d\n", a[i], vowel[i]);
}