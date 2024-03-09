#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y =5;
    printf("Before : %d-%d\n",x,y);
    swap(&x,&y);
    printf("After : %d-%d",x,y);
}