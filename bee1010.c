#include <stdio.h>
 
int main() {
    int id1, id2;
    int n1, n2;
    float p1,p2;
    
    scanf("%i %i %f", &id1, &n1, &p1);
    scanf("%i %i %f", &id2, &n2, &p2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", (n1*p1)+(n2*p2));
    
 
    return 0;
}