#include <stdio.h>
void input(){
    int num;
    printf("Input a number[1-4] : ");
    scanf("%d",&num);
    if (num > 0){
        switch (num){
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        case 4: printf("Four\n"); break;
        default: printf("Too large\n"); break;
        }
    }
    else printf("Too small\n");
}

int main(){
    char ans;
    do{
        input();
        do{
            printf("Do you want to continue? [Y/N]");
            scanf(" %c",&ans);
            if(ans == 'Y'||ans=='N') break;
        }while (ans != 'Y' || ans != 'N');
        if(ans == 'N') break;
    } while(ans == 'Y');
}