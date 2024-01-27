echo "# C1_Basic-C" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/Java12361/C1_Basic-C.git
git push -u origin main

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int game (char u, char pc) {
    if (u == pc)
        return -1;

    if (u == 's' && pc == 'p')
        return 0;
            else if (u == 'p' && pc == 's')
                return 1;
    
    if (u == 's' && pc == 'z')
        return 1;
            else if (u == 'z' && pc == 's')
                return 0;
    
    if (u == 'p' && pc == 'z')
        return 0;
            else if (u == 'z' && pc == 'p')
                return 1;

}

int main (){

    int n;
    char u,pc,rs;

    srand(time(NULL));
    n = rand() % 100;

    if (n < 33) pc = 's';
    else if (n > 33 && n < 66) pc = 'p';
    else pc = 'z';

    printf ("\n\n\t Enter s for stone, p for paper, and z for scissor :\t");
    scanf("%c", &u);

    rs = game(u,pc);

    if (rs == -1) printf("\n\n\t Game Draw! \n");
    else if (rs == 1) printf("\n\n\t Congrats You Won! \n ");
    else printf("You lost the game");

    printf("\n\n\tYou choose: %c \n\t Computer choose: %c \n\n",u,pc);
}
