#include <stdio.h>
int main(){
    float temperatures[7] = {24.6, 23.5, 24.7, 25.1, 26.3, 24.1, 23.8};
    float sum=0,average,max=temperatures[0],min=temperatures[0];
    char maxday,minday;
    
    for(int i=0;i<7;i++){
        sum += temperatures[i];
        //printf("%.2f\n",sum);
    }

    for(int i=1;i<7;i++){
        if(max < temperatures[i]) {
            max = temperatures[i];
        }
        else if(min > temperatures[i]) min = temperatures[i];
    }
    average = sum/7;
    printf("Average is %.2f\'c\n",average);
    printf("Maximum is %.2f\'c\n",max);
    printf("Minimum is %.2f\'c\n",min);

    return 0;
}

char day(int i){
    switch (i)
    {
    case 1: return "Monday"; break;
    case 2: return "Tuesday"; break;
    case 3: return "Wednesday"; break;
    case 4: return "Thursday"; break;
    case 5: return "Friday"; break;
    case 6: return "Saturday"; break;
    case 7: return "Sunday"; break;
    }
}