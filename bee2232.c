#include <stdio.h>
#include <math.h>
 
int main() {
    int T;
    scanf("%d", &T);

    unsigned long long int lines[31];
    lines[0] = 1;
    for(int i = 1; i < 31; i++){
        lines[i] = lines[i-1]*2;
        // printf("lines[%d] = %llu\n", i, lines[i]);
    }

    for(int i = 0; i < T; i++){
        unsigned long int sum = 0;
        int n;
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            sum += lines[j];
        }
        printf("%llu\n", sum);
    }

 
    return 0;
}