#include <stdio.h>
 
int main() {
    int n, c ,m;
    scanf("%d %d %d", &n, &c, &m);
    int stickers[100] = { 0 };
    for(int i = 0; i < c; i++){
        int num;
        scanf("%d", &num);
        stickers[num] = 1;
    }
    int count = c;
    for(int i = 0; i < m; i++){
        int num;
        scanf("%d", &num);
        if(stickers[num] == 1){
            count--;
            stickers[num]++;
        }        
    }
    printf("%d\n", count);



    return 0;
}