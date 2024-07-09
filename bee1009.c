#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char* name = malloc(20*sizeof(char));
    double a, b;
    scanf("%s %lf %lf", name, &a, &b);
    printf("TOTAL = R$ %.2lf\n", a+(b*0.15));
 
    free(name);
    return 0;
}