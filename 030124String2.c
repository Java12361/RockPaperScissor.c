#include <stdio.h>
#include <string.h>
int main(){
    int n,count;
    do
    {
        printf("How Many String You Want TO Sort? : ");
        scanf("%d",&n);

        char str[n][25],hold[25];

        if (n<2 || n>10) //condition checking
        {
            printf("Your Sting Should Be Between 2 and 10\n");
            continue;
        }
        else //function
        {
            for(int i=0;i<n;i++)
            {
                printf("String %d : ",i+1);
                scanf("%s",str[i]);
                count = strlen(str[i]);
                if(count>25) //if characters is exceed 25 we won't store it, and repeat
                {
                    printf("String Cannot Exceed 25\n");
                    i--;
                    fflush(str);
                    continue;
                }
                else
                {
                    printf("%s is %d character(s) long\n",str[i],count);
                }
            }

            for(int i=0;i<n;i++) //sorting funstion
            {
                for(int j=i+1;j<n;j++)
                {
                    if(strcmp(str[i],str[j]) > 0)
                    {
                        strcpy(hold,str[j]);
                        strcpy(str[j],str[i]);
                        strcpy(str[i],hold);
                        
                    }
                }
                printf("%s ",str[i]);
            }
        }
    } while(n<2 || n>10);
}