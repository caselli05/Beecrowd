#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int carneiros[n];
    unsigned long long int total = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &carneiros[i]);
        total += carneiros[i];
    }
    int stars_count = 1;
    int i = 0;
    while(0 <= i && i < n){
        int tmp = i;
        if(carneiros[i]%2 == 0){
            tmp--;
        }else{
            tmp++;
            if(tmp != n){
                stars_count++;
            }
        }
        if(carneiros[i] > 0){
            carneiros[i]--;
            total--;
        }
        i = tmp;
    }
    printf("%d %llu\n", stars_count, total);

    return 0;
}