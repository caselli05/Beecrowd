#include <stdio.h>

 
int main() {
    int k;
    scanf("%d", &k);
    for(int i = 0, a = 1, b = 1, c = 1, x = 1; i < k*2; i++){
        printf("%d %d %d\n", a, b ,c);
        if(i%2 != 0){
            a++;
            b += i+1;
            x++;
            c = x*x*x;
        }
        else{
            b++;
            c++;
        }
    }

    return 0;
}