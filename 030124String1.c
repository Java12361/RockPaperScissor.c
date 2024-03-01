#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Input : ");
    scanf("%s",str);
    printf("Count Symbol : %d",strlen(str)); //count symbol
    strcpy(str,"Hello");
    printf("\n%s",str);
    strcat(str," World");
    printf("\n%s\n",str);
    
    printf("%d \n",strcmp("Ant","Bird")); // A before B so -1
    printf("%d \n",strcmp("Ant","Ant")); // A = B so 0
    printf("%d \n",strncmp("Antk","Anta",4)); // B after A so 1
}