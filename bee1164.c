#include <stdio.h>

 
int main() {
    int k;
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        int n;
        scanf("%d", &n);
        int sum = 0;
        for(int j = 1; j <= n; j++){
            if(n%j == 0){
                if(j != n){
                    sum += j;
                }
            }
        }
        if(sum == n){
            printf("%d eh perfeito\n", n);
        }
        else{
            printf("%d nao eh perfeito\n", n);
        }
        
    }

    return 0;
}