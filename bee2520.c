#include <stdio.h>
 
int main() {
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF){
        int pokeX, pokeY;
        int playerX, playerY;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int num;
                scanf("%d", &num);
                if(num == 2){
                    pokeX = i;
                    pokeY = j;
                }else if(num == 1){
                    playerX = i;
                    playerY = j;
                }
            }
        }
        printf("%d\n", abs(pokeX-playerX)+abs(pokeY-playerY));


    }
    
    return 0;
}