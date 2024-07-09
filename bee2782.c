#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    if(n == 1){
        printf("1\n");
        return 0;
    }else if(n == 2){
        printf("2\n");
        return 0;
    }

    int a, b;
    scanf("%d %d", &a, &b);
    int dif = a - b;
    int count = 1;
    for(int i = 2; i < n; i++){
        int this_dif;
        int num;
        scanf("%d", &num);
        this_dif = b - num;
        if(this_dif != dif){
            count ++;
            dif = this_dif;
        }
        b = num;

    }
    printf("%d\n", count);

    return 0;
}