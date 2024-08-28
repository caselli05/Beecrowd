#include <stdio.h>
 
int seq(int n, int max){
    if(n == 1){
        return max;
    }

    if(n%2 == 0){
        n /= 2;
    }else{
        n *= 3;
        n += 1;
    }

    if(n > max){
        max = n;
    }

    int next = seq(n, max);
    return next;
}

int main() {
    int n;
    scanf("%d", &n);
    while(n != 0){
        int max = seq(n, n);
        printf("%d\n", max);
        scanf("%d", &n);
    }
    
 
    return 0;
}