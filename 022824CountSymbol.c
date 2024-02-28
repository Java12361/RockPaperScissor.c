#include <stdio.h>
#include <string.h>
int count(char str[]){
    /* this also count symbol however it is manual
    int length=0;
    while (str[length]!='\0'){
        length++;
    }
    return length;*/
    int x = strlen(str); // use for count symbol
    return x;
}
int main(){
    char str[100];
    printf("Insert your text : ");
    scanf("%s",str);
    printf("Your text is %d character long",count(str));
}