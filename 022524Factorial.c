//Factorial function using loop and check for error
#include <stdio.h>
long long factorial(int num){
    if (num == 1 || num == 0) return (long long)1;
    else {
        return (long long)num * factorial(num-1);
    }
}

int main(){
    int num;
    char stop;
    do {
        printf("\nInsert a number : "), scanf("%d",&num);
        if(num < 0) {
            printf("Please put a positive integer"); 
            continue;
        }
        
        else if(num > 20){
            printf("Error! Factorial is too large.");
            continue;
        }

        printf("Fac! is : %lld \n",factorial(num));

        do{
            printf("Do you want to continue? [Y/N] : "), scanf(" %c",&stop);
            if(stop=='N') break;
            else if (stop=='Y') break;
        } while(stop!='N'||stop!='Y');
        if(stop=='N') break;

    } while(stop!='N');
    printf ("-Bye-");
    
}