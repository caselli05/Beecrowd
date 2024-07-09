#include <stdio.h>

 
int main() {
    int k;
    scanf("%d", &k);
    for(int i = 0, n = 1; i < k; i++){
        for(int j = 0; j < 3; j++){
        printf("%d ", n);
        n++;
        }
        n++;
        printf("PUM\n");
    }
    
    return 0;
}