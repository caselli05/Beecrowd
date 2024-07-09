#include <stdio.h>

int main(void){
    int nums[2000] = { 0 };
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        nums[num-1]++;
    }
    for(int i = 0; i < 2000; i++){
        if(nums[i] != 0){
            printf("%d aparece %d vez(es)\n", i+1, nums[i]);
        }
    }

    return 0;
}