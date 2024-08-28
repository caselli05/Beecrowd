#include <stdio.h>
 
int main() {
    int fat[14];
    fat[0] = 1;
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        fat[i] = fat[i-1]*i;
        // printf("%d = %d\n", i, fat[i]);
    }
    printf("%d\n", fat[n]);
 
    return 0;
}