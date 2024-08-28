#include <stdio.h>

void turn(int n, char s[]){
    int i = 0;
    int turned = 0;
    while(n > 0){
        s[i] = (n%10)+'0';
        n /= 10;
        i++;
    }

    return;
}
 
int main() {
    int c;
    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        int b, e;
        scanf("%d %d", &b, &e);
        for(int j = b; j <= e; j++){
            printf("%d", j);
        }
        for(int j = e; j >= b; j--){
            char s[101] = { 0 };
            turn(j,s);
            printf("%s", s);
        }
        printf("\n");
    }
    
 
    return 0;
}