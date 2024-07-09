#include <stdio.h>

 
int main() {
    int on = 1;
    while (on == 1){
        int x, y;
        scanf("%d %d", &x, &y);
        if((x <= 0) || (y <= 0)){
            return 0;
        }
        if(x > y){
            int tmp = x;
            x = y;
            y = tmp;
        }

        int sum = 0;
        for(int i = x; i <= y; i++){
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }
    
    
    
    return 0;
}