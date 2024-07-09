#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double d = (b*b) - 4*a*c;
    if((d < 0) || (a == 0)){
        printf("Impossivel calcular\n");
    }
    else{
        double r1 = (((-1)*b) + sqrt(d))/(2*a);
        double r2 = ((-1)*b - sqrt(d))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }
    
 
    return 0;
}