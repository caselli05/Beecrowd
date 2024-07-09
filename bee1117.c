#include <stdio.h>

 
int main() {
    float sum = 0;
    for(int i = 0, j = 0; j < 2; i++){
        float grade;
        scanf("%f", &grade);
        if((0 <= grade) && (grade <= 10)){
            sum += grade;
            j++;
        } 
        else{
            printf("nota invalida\n");
        }
    }

    printf("media = %.2f\n", sum/2.0);
    
    return 0;
}