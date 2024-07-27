#include <stdio.h>
#include <math.h>

int primo(int n);

int main() {
    int n;
    while(scanf("%d", &n) != EOF){
        if(primo(n) == 0){
            printf("Nada\n");
        }else{
            int foi = 0;
            while(n > 0){
                int num = n%10;
                if(primo(num) == 0){
                    printf("Primo\n");
                    foi = 1;
                    break;
                }
                n /= 10;
            }
            if(foi == 0){
                printf("Super\n");
            }
        }
    }    
 
    return 0;
}


int primo(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    int k = sqrt(n);
    for(int i = 2; i <= k; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}