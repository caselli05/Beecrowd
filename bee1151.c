#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    int fib[n];
    if(n == 0){
        printf("0\n");
        return 0;
    }else if(n == 1){
        printf("0 1\n");
        return 0;
    }
    fib[0] = 0;
    fib[1] = 1;
    printf("0 1");
    for(int i = 2; i < n; i++){
        fib[i] = fib[i-1]+fib[i-2];
        printf(" %d", fib[i]);
    }
    printf("\n");
 
    return 0;
}