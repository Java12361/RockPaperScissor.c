//Write a C program that swaps two numbers using pointers.
#include <stdio.h>
int main()
{
    int x=10, y=20;
    printf("1.x=%d  y=%d\n",x,y);
    int *px, *py;
    px = &x;
    py = &y;
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
    printf("2.x=%d  y=%d",x,y);
}