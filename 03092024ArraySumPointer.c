#include <stdio.h>
int sumf(int *array)
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum += *(array + i);
    }
    return sum;
}

int main()
{
    int sum, array[5] = {1,3,5,7,9};
    sum = sumf(&array);
    printf("Result : %d",sum);
}