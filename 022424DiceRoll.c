//given two ints return their sum. if Two number are the same return double the number of their sum
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate(){
    return rand()%6+1;
}

int sum(){
    int num1,num2;
    num1 = generate();
    num2 = generate();

    if(num1 == num2){
        return (num1+num2)*2;
    }
    else return num1+num2;
}

int main(){
    srand(time(0)); //seed

for(int i=1;i<=10;i++){
    printf("\nSUM of dice %-2d is : %2d",i,sum());
}
    return 0;
}