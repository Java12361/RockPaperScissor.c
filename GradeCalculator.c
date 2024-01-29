#include <stdio.h>
int main() {
    int as,mt,ft; // as = assignment, mt = midterm test, ft = final test, t = total score
    float t;

    printf("Total assignment score [50]: ");
    scanf("%d",&as);
    printf("Midterm Score [40]: ");
    scanf("%d",&mt);
    printf("Final Score [50]: ");
    scanf("%d",&ft);

    if (as>50) {printf("Your assignment score should not exceed 50\n");
                return 0; }
    if (mt>40) {printf("Your midterm score should not exceed 40\n");
                return 0; }
    if (ft>50) {printf("Your final score should not exceed 50\n");
                return 0;}

    t = (float) (as/5)+mt+ft;


    if (t >= 0 && t <= 100) {
        if (t >= 90) printf ("Grade is %.2f and you got A\n",t);
        else if (t >= 80) printf ("Grade is %.2f and you got B\n",t);
        else if (t >= 70) printf ("Grade is %.2f and you got C\n",t);
        else if (t >= 60) printf ("Grade is %.2f and you got D\n",t);
        else printf ("Grade is %.2f and you got F\n",t);
    }
}