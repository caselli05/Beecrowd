#include <stdio.h>

int main(void){
    int n = 0, m;
    scanf("%d %d", &n, &m);
    while(n != 0 && m != 0){
        int tickets[10000] = { 0 };
        int count = 0;
        for(int i = 0; i < m; i++){
            int num;
            scanf("%d", &num);
            if(tickets[num] == 0){
                tickets[num] = 1;
            }else if(tickets[num] == 1){
                count++;
                tickets[num] = 2;
            }
        }
        printf("%d\n", count);

        scanf("%d %d", &n, &m);
    }
    return 0;
}