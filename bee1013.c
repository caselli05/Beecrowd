#include <stdio.h>

int main(void){
    int num[3];
    scanf("%d %d %d", &num[0], &num[1], &num[2]);


    for(int i = 0; i < 3; i++){
        int is_bigger = 1;
        for(int j = i+1; j < 3; j++){
            if(num[i] < num[j]){
                is_bigger = 0;
            }
        }
        if(is_bigger == 1){
            printf("%i eh o maior\n", num[i]);
            return 0;
        }
    }

    
    return 0;
}