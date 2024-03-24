#include <stdio.h>
void topbun(int n)
{
    for(int i=1;i<=n/2;i++)
    {
        for(int k=1;k<=n;k++)
        {
            if((i==1&&(k==1||k==n))) printf("   ");
            else if((i==n&&(k==1||k==n))) printf("   ");
            else printf("*  ");
        }
        printf("\n");
    }
}
void botbun(int n)
{
    for(int i=n/2;i!=0;i--)
    {
        for(int k=1;k<=n;k++)
        {
            if((i==1&&(k==1||k==n))) printf("   ");
            else if((i==n&&(k==1||k==n))) printf("   ");
            else printf("*  ");
        }
        printf("\n");
    }
}
void cheese(int n)
{
    for(int i=1;i<=n;i++) printf("~~ ");
}
void patty(int n)
{
    int m=n/2;
    for(int i=1;i<=m;i++)
    {
        for(int k=1;k<=n;k++)
        {
            if((i==1&&(k==1||k==n))) printf("   ");
            else if((i==m&&(k==1||k==n))) printf("   ");
            else printf("## ");
        }
        printf("\n");
    }
}
int main()
{
    int n, choice, price = 10,data[2]={0};
    printf("how large the burger? : ");
    scanf("%d",&n);
    topbun(n);
    do
    {
        printf("What do you want to add? \n1.Patty($10)\n2.Cheese($4)\n3.checkout");
        scanf("%d",&choice);
        if(choice<0||choice>3) continue;
        switch (choice)
        {
        case 1:
        {
            data[1]++;
            price += 10;
        } break;
        case 2:
        {
            data[2]++;
            price += 4;
        } break;
        }
    }while (choice!=3);
    botbun(n);
    printf("Total Price = %d",price);
}