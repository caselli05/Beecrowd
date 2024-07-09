#include <stdio.h>
#include <math.h>
 
int main() {
    int r1, x1, y1, r2, x2, y2;
    while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
        double d = sqrt(pow((x1-x2), 2) + pow((y1-y2),2));
    
        if(d+r2<=r1){
            printf("RICO\n");
        }
        else{
            printf("MORTO\n");
        }
    }


    return 0;
}