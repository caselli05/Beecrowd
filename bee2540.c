#include <stdio.h>
 
int main() {
    int n;
    while(scanf("%d", &n) != EOF){
        int votes[n];
        double sum = 0;
        for(int i = 0; i < n; i++){
            int vote;
            scanf("%d", &vote);
            votes[i] = vote;
            if(vote == 1){
                sum ++;
            }
        }
        if(sum >= 2.0*(double)n/3.0){
            printf("impeachment\n");
        }else{
            printf("acusacao arquivada\n");
        }
    }
 
    return 0;
}