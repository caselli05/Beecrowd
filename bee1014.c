#include <stdio.h>

int main(void){
    int km;
    float vol;
    scanf("%d %f", &km, &vol);

    printf("%.3f km/l\n", km/vol);
    
    return 0;
}