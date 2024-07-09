#include <stdio.h>

int main(void){
    int num;
    int i = 0;
    while(scanf("%d", &num) != EOF){
        if(num <= 0){
            num = 1;
        }
        printf("X[%d] = %d\n", i, num);
        i++;
    }

    return 0;
}