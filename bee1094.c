#include <stdio.h>

 
int main() {
    int k;
    scanf("%d", &k);

    int sum = 0;
    int c = 0;
    int r = 0;
    int s = 0;

    for(int i =0; i < k; i++){
        int n;
        char a;
        scanf("%d %c", &n, &a);

        sum += n;

        switch (a)
        {
        case 'C':
            c += n;
            break;
        case 'R':
            r += n;
            break;
        case 'S':
            s += n;
            break;
        default:
            break;
        }
    }

    double tmp = sum; 

    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %%\n", (c/tmp)*100);
    printf("Percentual de ratos: %.2lf %%\n", (r/tmp)*100);
    printf("Percentual de sapos: %.2lf %%\n", (s/tmp)*100);
    
    return 0;
}