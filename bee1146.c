#include <stdio.h>

 
int main() {
    int on = 1;
    while(on == 1){
        int n;
        scanf("%d", &n);

        if(n == 0){
            return 0;
        }
        for(int i = 1; i < n; i++){
            printf("%d ", i);
        }
        printf("%d\n", n);
    }

    return 0;
}