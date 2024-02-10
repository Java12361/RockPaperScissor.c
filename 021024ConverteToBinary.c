#include <stdio.h>

long calculator(int num){
    long binary = 0, remainder,f = 1;
    while(num!=0){
        remainder = num % 2;
        binary = binary+remainder*f;
        f = f * 10;
        num = num / 2;
    }
    return binary;
}

int main(){
    int num;

    printf("Input any decimal number : ");
    scanf("%d",&num);

    printf("Binary value is : %ld", calculator(num));
}