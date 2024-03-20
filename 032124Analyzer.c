#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch, prev_ch='\0';
    int word=0;
    int line=0;
    int character=0;
    
    printf("ENter File name : ");
    scanf("%s",filename);
    if((fp=fopen(filename,"r"))==NULL)
    {
        printf("Error cannot open %s",filename);
        return -1;
    }
    while((ch = fgetc(fp))!=EOF)
    {
        character++;
        if(ch == '\n') line++;
        if(!isspace(prev_ch) && (isspace(ch) || ch == '\n' || ch == EOF)) word++;
    }

    fclose(fp);

    printf("Number of lines : %d \n",line);
    printf("Number of words : %d \n",word);
    printf("Number of character : %d \n",character);

    return 0;
}