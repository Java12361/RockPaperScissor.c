#include <stdio.h>
int StoreNSort(int size){
    int Number[size];
    for(int i=0; i<size; i++){
        printf("Number %d : ",i+1), scanf("%d",&Number[i]);
    }

    int max = Number[0],secondmax = Number[0];
    for(int i=1; i<size; i++){
            if(max<Number[i]) max = Number[i];
    }

    for(int i=1;i<size;i++){
            if(secondmax<Number[i] && max>Number[i]) secondmax = Number[i];
    }
    return secondmax;
}

int main(){
    int size;
    char symbol;
    do{
        printf("Size : "),scanf("%d",&size);
        if(size<=1) {
            printf("Please put a integer grater than 1!\n"); continue;
        }

        printf("Second max is : %d\n",StoreNSort(size));

        do{
            printf("Do you want to continue? [Y/N] : "),scanf(" %c",&symbol);
            if(symbol=='Y'||symbol=='N') break;
        } while (symbol!='Y'||symbol!='N');

    }while(symbol!='N');
    printf("-Bye-");
    
}