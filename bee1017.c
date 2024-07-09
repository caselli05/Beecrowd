#include <stdio.h>

const float USAGE = 12.0;
 
int main() {
    int dur, speed;
    scanf("%d %d", &dur, &speed);
    
    printf("%.3f\n", (speed*dur)/USAGE);
    
    
    
 
    return 0;
}