#include <stdio.h>

 
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    for(int i = 0, n = 1; n < y; i++){
        for(int j = 0; j < x-1; j++){
            printf("%d ", n);
            n++;
        }
        printf("%d\n",n);
        n++;
        
    }
    
    return 0;
}