#include <stdio.h>

int check(int num){
    if (num % 2 == 0) return 0;
    else return 1;
}

int main(){
    int num,re;

    printf("Test Data : ");
    scanf("%d",&num);

   re =  check(num);
   if (re==0) printf("%d is even number",num);
   else if (re==1) printf("%d is odd number",num);
   else printf("ERROR");

}