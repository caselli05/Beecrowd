#include <stdio.h>
 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int field[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int num;
            scanf("%d", &num);
            field[i][j] = num;
        }
    }
    for(int i = 1; i < n-1; i++){
        for(int j = 1; j < m-1; j++){
            if(field[i-1][j-1] == 7 && field[i-1][j] == 7 && field[i-1][j+1] == 7 &&
            field[i][j-1] == 7 && field[i][j] == 42 && field[i][j+1] == 7 &&
            field[i+1][j-1] == 7 && field[i+1][j] == 7 && field[i+1][j+1] == 7){
                printf("%d %d\n", i+1, j+1);
                return 0;
            }
        }
    }
    printf("0 0\n");

 
    return 0;
}