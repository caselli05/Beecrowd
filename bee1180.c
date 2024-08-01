#include <stdio.h>
 
int main() {
    int min, min_pos;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        if(i == 0){
            min = num;
            min_pos = 0;
        }else if(num < min){
            min = num;
            min_pos = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, min_pos);

    return 0;
}