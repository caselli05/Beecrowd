#include <stdio.h>
 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int max = -1;
    int mat[n][m];
    for(int i = 0; i < n; i++){
        int sumLine = 0;
        for(int j = 0; j < m; j++){
            int num;
            scanf("%d", &num);
            mat[i][j] = num;
            sumLine += num;
        }
        if(sumLine > max){
            max = sumLine;
        }
    }

    for(int j = 0; j < m; j++){
        int sumColl = 0;
        for(int i = 0; i < n; i++){
            sumColl += mat[i][j];
        }
        if(sumColl > max){
            max = sumColl; 
        }
    }

    printf("%d\n", max);


    return 0;
}