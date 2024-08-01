#include <stdio.h>
 
int main() {
    double a[100];
    for(int i = 0; i < 100; i++){
        double num;
        scanf("%lf", &num);
        a[i] = num;
        if(num <= 10){
            printf("A[%d] = %.1lf\n", i, num);
        }
    }

 
    return 0;
}