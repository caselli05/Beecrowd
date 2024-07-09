#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    int stickers[100]= { 0 };

    for(int i = 0; i < m; i++){
        int num;
        scanf("%d", &num);
        if(stickers[num-1] == 0){
            n--;
            stickers[num-1] = 1;
        }
    }

    printf("%d\n", n);


    return 0;
}