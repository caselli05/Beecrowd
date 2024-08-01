#include <stdio.h>
 
int main() {
    int n[20];
    for(int i = 0; i < 20; i++){
        int num;
        scanf("%d", &num);
        n[i] = num;
    }
    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, n[19-i]);
    }
 
    return 0;
}