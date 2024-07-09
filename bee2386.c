#include <stdio.h>
 
const long long int MIN_FOTONS = 40000000;

int main() {
    long long int telescope;
    scanf("%lld", &telescope);
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < n; i++){
        long long int light;
        scanf("%lld", &light);
        if(light*telescope >= MIN_FOTONS){
            count++;
        }
    }
    printf("%d\n", count);

    
    return 0;
}