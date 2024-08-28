#include <stdio.h>
 
int main() {
    int N;
    while(scanf("%d", &N) != EOF){
        int e1, e2;
        scanf("%d %d", &e1, &e2);
        int a1[N];
        int t1[N-1];
        int t2[N-1];
        int a2[N];

        for(int i = 0; i < N; i++){
            int num;
            scanf("%d", &num);
            a1[i] = num;
        }
        for(int i = 0; i < N; i++){
            int num;
            scanf("%d", &num);
            a2[i] = num;
        }
        for(int i = 0; i < N-1; i++){
            int num;
            scanf("%d", &num);
            t1[i] = num;
        }
        for(int i = 0; i < N-1; i++){
            int num;
            scanf("%d", &num);
            t2[i] = num;
        }

        int x1, x2;
        scanf("%d %d", &x1, &x2);

        a1[0] += e1;
        a2[0] += e2;

        a1[N-1] += x1;
        a2[N-1] += x2;

        for(int j = N-2; j >= 0; j--){
            // a1
            if((a2[j+1]+t1[j]) < a1[j+1]){
                a1[j] += a2[j+1]+t1[j];
            }else{
                a1[j] += a1[j+1];
            }
            // a2
            if((a1[j+1]+t2[j]) < a2[j+1]){
                a2[j] += a1[j+1]+t2[j];
            }else{
                a2[j] += a2[j+1];
            }
        }

        if(a2[0] < a1[0]){
            printf("%d\n", a2[0]);
        }else{
            printf("%d\n", a1[0]);
        }

    }
 
    return 0;
}