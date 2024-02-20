#include <stdio.h>

// Change return type to void since we're not returning a value
void calBmi(float w, float h){
    if (w <= 0 || h <= 0) {
        printf("Please put a positive number!\n");
        return; // Early return in case of invalid input
    }
    
    h = h / 100; // Convert height from cm to meters
    float bmi = w / (h * h);
    if (bmi <= 18.4) printf("bmi = %.1f you are UnderWeight\n", bmi);
    else if (bmi <= 24.9) printf("bmi = %.1f you are NormalWeight\n", bmi);
    else if (bmi <= 34.9) printf("bmi = %.1f you are Overweight\n", bmi);
    else printf("bmi = %.1f you are Obese\n", bmi);
}

int main(){
    char answer;
    float w, h;

    do {
        printf("Weight(kg) : ");
        scanf("%f", &w);
        printf("Height(cm) : ");
        scanf("%f", &h);

        calBmi(w, h);

        do {
            printf("Do You Want To Continue? (Y/N) : ");
            scanf(" %c", &answer); // Note: space before %c to consume any newline character left in the input buffer
        } while (answer != 'Y' && answer != 'N');
    } while (answer == 'Y');
    
    printf("-Bye-\n");
    return 0; // Indicate successful termination
}
