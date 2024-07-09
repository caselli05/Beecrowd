#include <stdio.h>

int main(void){
    int n[1000];
    int num;
    scanf("%d", &num);
    for(int i = 0; i < 1000; i++){
        n[i] = i%num;
        printf("N[%d] = %d\n", i , n[i]);
    }

    return 0;
}