#include <stdio.h>

const double PI = 3.14159;

int main() {
    double r;
    scanf("%lf", &r);
    printf("VOLUME = %.3lf\n", ((4.0/3)*PI*r*r*r));
 
    return 0;
}