#include <stdio.h>

const double PI = 3.14159;
 
int main() {
     double A, r;
     scanf("%lf", &r);
     A = PI*(r*r);
     printf("A=%.4lf\n", A);
     
 
    return 0;
}