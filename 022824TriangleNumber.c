#include <stdio.h>
void triangle(int);

int main(){
    int size;
    
    do
    {
        printf("Size : "), scanf("%d",&size);

        if(size<=3 || size>=30)
        {
            printf("Please put an integer between 3 and 30.\n");
            continue;
        }

        triangle(size+1);

    } while(size<=3 || size>=30);
}

void triangle(int size)
{
    int store[size][size];
    int k=1,sum=0;
    for(int i=0;i<size;i++) //suppose that array is always 0 if I do i<= size the data will w\exceed the cap and return random number.
    {
        for(int j=0;j<size;j++)
        {
            if(j<i)
            {
                store[i][j] = k++;
                printf("%-3d",store[i][j]);
            }
            else printf("   ");
        }
        
        printf("\t\t");
        for(int j=0;j<size;j++)
        {
            if(j<i && (j==0||j==i-1||i==size-1)) //don't forget the parathesis as after &&
            {
                printf("%-3d",store[i][j]);
                sum += store[i][j];
            }
            else printf("   ");
            
        }
        printf("\n");
    }
    printf("**************************************\n");
    printf("Sum of second triangle is : %d\n",sum);
    printf("**************************************");
}