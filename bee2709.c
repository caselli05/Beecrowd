#include <stdio.h>


int prime(int n);

 
int main() {
    int n;
    while(scanf("%d", &n) != EOF){
        int coins[n];
        for(int i = 0; i < n; i++){
            int num;
            scanf("%d", &num);
            coins[i] = num;
        }
        int j;
        scanf("%d", &j);
        
        int sum = 0;
        n--;
        while(n >= 0){
            sum += coins[n];
            n -= j;
        }
        if(prime(sum) == 1){
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }else{
            printf("Bad boy! I’ll hit you.\n");
        }
    }
 
    return 0;
}


int prime(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return 0;
        }
    }

    return 1;
}