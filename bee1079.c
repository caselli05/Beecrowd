#include <stdio.h>

 
int main() {
    int k;
    scanf("%d", &k);

    for(int i = 0; i < k; i++){
        double n1, n2, n3;
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        printf("%.1f\n", ((n1*2)+(n2*3)+(n3*5))/10);
    } 

    return 0;
}