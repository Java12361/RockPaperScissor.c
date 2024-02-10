#include <stdio.h>

int Square(int n){
    int sq;
    sq = n * n;
    return sq;
}

int main(){
int num,sq;
printf("Test Data : ");
scanf("%d",&num);

sq = Square(num);
printf("The square of %d is : %d",num,sq);

return 0;

}

