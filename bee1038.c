#include <stdio.h>

 
int main() {
    int code, num;
    scanf("%d %d", &code, &num);
    float price[5] = {4.0, 4.5, 5.0, 2.0, 1.5};
    printf("Total: R$ %.2f\n", price[code-1]*num);
    
 
    return 0;
}