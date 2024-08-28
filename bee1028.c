#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mmc(int a, int b){
    while(a != b){
        if(a > b){
            a -= b;
        }else{
            b -= a;
        }
    }

    return a;
}
 
int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int f1, f2;
        scanf("%d %d", &f1, &f2);
        int num = mmc(f1, f2);
        printf("%d\n", num);
    }

    return 0;
}