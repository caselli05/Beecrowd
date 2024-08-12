#include <stdio.h>

long long int module(long long int x);

int main() {
    int n;
    while(scanf("%d", &n) != EOF){
        long long int left = 0, right = 0;
        int k = n/2;
        int tasks[n];
        
        for(int i = 0; i < n; i++){
            scanf("%d", &tasks[i]);
        }

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(tasks[i] > tasks[j]){
                    int tmp = tasks[i];
                    tasks[i] = tasks[j];
                    tasks[j] = tmp;
                }
            }
            printf("%d ", tasks[i]);
            if(i <= k){
                left += tasks[i];
            }else{
                right += tasks[i];
            }
        }

        long long int dif = left - right;
        if(dif < 0){
            while(module(dif) > module(dif+(2*tasks[k+1])) /*&& (k+1 != n-1)*/){
                dif += (2*tasks[k+1]);
                k++;
            }
        }else{
            while(module(dif) > module(dif-(2*tasks[k]))/* && (k != 0)*/){
                dif -= (2*tasks[k]);
                k--;
            }
        }
        printf("%lld\n", module(dif));
    }

    return 0;
}


long long int module(long long int x){
    if(x > 0){
        return x;
    }else{
        return -x;
    }
}