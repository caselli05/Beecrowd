#include <stdio.h>

 
int main() {
    int num = 0;
    for(int i = 0; i < 6; i++){
        float n;
        scanf("%f", &n);
        if(n > 0){
            num++;
        }
    }
    printf("%d valores positivos\n", num);

    return 0;
}