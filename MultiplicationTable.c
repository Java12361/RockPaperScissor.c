#include <stdio.h>
int main() {

    int num,mul;
    printf ("What the number that you would like to see multiplication table: ");
    scanf ("%d",&num);

    for (mul = 1; mul <= 12; mul++) {
        printf("%d x %d = %d \n",num, mul, num*mul);
    }

return 0;

}