#include <stdio.h>

 
int main() {
    int k;
    scanf("%d", &k);

    for(int i = 0; i < k; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        if(x > y){
            int tmp = x;
            x = y;
            y = tmp;
        }
        
        int sum = 0;
        for(int j = x+1; j < y; j++){
            if(j%2 != 0){
                sum += j;
            }
        }
        printf("%d\n", sum);
    }

}