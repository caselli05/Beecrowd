#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    double r = 0;

    while(n){
        r += 6;
        r = 1/r;
        n--;
    }

    printf("%.10lf\n", r+3);

    return 0;
}