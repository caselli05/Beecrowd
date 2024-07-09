#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        unsigned long long int fib[num];
        if(num == 0){
            printf("Fib(0) = 0\n");
        }else if(num == 1){
            printf("Fib(1) = 1\n");
        }else{
            fib[0] = 0;
            fib[1] = 1;
            for(int j = 2; j <= num; j++){
                fib[j] = fib[j-2] + fib[j-1];
            }
            printf("Fib(%d) = %llu\n", num, fib[num]);
        }
    }

    return 0;
}