#include <stdio.h>

 
int main() {
    int g;
    int pos;

    for(int i = 0; i < 100; i++){
        int n;
        scanf("%d", &n);

        if(i == 0){
            g = n;
            pos = 1;
        }
        else if(n > g){
            g = n;
            pos = i+1;
        }
    } 
    printf("%d\n%d\n", g, pos);

    return 0;
}