#include <stdio.h>
 
int game(int k, int nums[k][k], int flag[k][k], int n, int m);
 
int main(void){
    int k;
    int n, m;
    scanf("%d %d %d", &k, &n, &m);
    n--;
    m--;
    int nums[k][k];
    int flag[k][k];
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            scanf("%d", &nums[i][j]);
            flag[i][j] = 0;
        }
    }

    printf("%d\n", game(k, nums, flag, n, m));
    return 0;
}



int game(int k, int nums[k][k], int flag[k][k], int n, int m){
    flag[n][m] = 1;
    int count = 1;
    //leste
    if(n+1 < k){
        if((flag[n+1][m] == 0) && nums[n+1][m] >= nums[n][m]){
            count += game(k, nums, flag, n+1, m);
        }
    }
    //sul
    if(m+1 < k){
        if((flag[n][m+1] == 0) && (nums[n][m+1] >= nums[n][m])){
            count += game(k, nums, flag, n, m+1);
        }
    }
    //oeste
    if(n-1 >= 0){
        if((flag[n-1][m] == 0) && (nums[n-1][m] >= nums[n][m])){
            count += game(k, nums, flag, n-1, m);
        }
    }
    //norte
    if(m-1 >= 0){
        if((flag[n][m-1] == 0) && (nums[n][m-1] >= nums[n][m])){
            count += game(k, nums, flag, n, m-1);
        }
    }

    return count;
}