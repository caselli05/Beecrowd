#include <stdio.h>

int main(void){
    int k;
    scanf("%d", &k);

    int max_seq = 1;
    int seq = 0;
    int last_n = 0;
    
    for(int i = 0; i < k; i++){
        int n;
        scanf("%d", &n);
        
        if(n == last_n){
            seq++;
            if(seq > max_seq){
                max_seq = seq;
            }
        }
        else{
            last_n = n;
            seq = 1;
        }
    }

    printf("%d\n", max_seq);

    return 0;
}