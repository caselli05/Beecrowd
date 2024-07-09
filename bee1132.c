#include <stdio.h>

 
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if(x > y){
        int tmp = x;
        x = y;
        y = tmp;
    }

    int sum = 0;
    for(int i = x; i < y; i++){
        if(i%13 != 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
    
    return 0;
}