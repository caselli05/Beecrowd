#include <stdio.h>

 
int main() {
    int count = 0;
    for(int i = 0; i < 5; i++){
        int n;
        scanf("%d", &n);
        if(n%2 == 0){
            count++;
        }
    }
    printf("%d valores pares\n", count);

    return 0;
}