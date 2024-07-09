#include <stdio.h>

 
int main() {
    int num = 0;
    float sum = 0;
    for(int i = 0; i < 6; i++){
        float n;
        scanf("%f", &n);
        if(n > 0){
            num++;
            sum += n;
        }
    }
    printf("%d valores positivos\n%.1f\n", num, sum/num);

    return 0;
}