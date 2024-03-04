#include <stdio.h>
#include <limits.h> //for INT_MIN function

int StoreNSort(int size){
    int Number[size];
    for(int i=0; i<size; i++){
        printf("Number %d : ",i+1), scanf("%d",&Number[i]);
    }

    int max = Number[0],secondmax = INT_MIN;
    for(int i=1; i<size; i++){
        if(max<Number[i]){
            secondmax = max;
            max = Number[i];
        }
        else if(secondmax<Number[i] && max>Number[i]){
            secondmax = Number[i];
        }
    }

    if(secondmax == INT_MIN || secondmax == max){
        printf("All elements are the same or no distinct second largest number.\n");
        return 0;
    }
    else return secondmax;
}

int main(){
    int size;
    char symbol;
    do{
        printf("Size : "),scanf("%d",&size);
        if(size<=1) {
            printf("Please put a integer grater than 1!\n"); continue;
        }

        if(StoreNSort!=0) printf("Second max is : %d\n",StoreNSort(size));

        do{
            printf("Do you want to continue? [Y/N] : "),scanf(" %c",&symbol);
            if(symbol=='Y'||symbol=='N') break;
        } while (symbol!='Y'||symbol!='N');

    }while(symbol!='N');
    printf("-Bye-");
    
}