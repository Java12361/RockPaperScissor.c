#include <stdio.h>
#define MAXstr 5
#define MAXcha 100

int count(char str[]){
    int length = 0;
    while (str[length]!='\0')
    {
        length++;
    }
    return length;
}

int main(){
    int array[MAXstr][MAXcha];
    int size,sum=0;
    do
    {
        printf("How many string you want to count? : ");
        scanf("%d",&size);
        if(size<0||size>5)
        {
            printf("Size is between 0 and 5\n");
            continue;
        }
    }while(size<0||size>5);

    printf("Enter %d Strings\n",size);
    for(int i=0;i<size;i++)
    {
        printf("Text %d : ",i+1);
        scanf("%s",array[i]);
        printf("Your text is %d character(s) long\n",count(array[i]));
        sum += count(array[i]);
    }
    printf("Total symbol is %d characters",sum);
}