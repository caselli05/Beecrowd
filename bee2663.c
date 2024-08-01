#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    int grades[1000] = { 0 };
    for(int i = 0; i < n; i++){
        int grade;
        scanf("%d", &grade);
        grades[grade-1] += 1;
    }
    int i;
    int j = k;
    for(i = 999; k > 0; i--){
        if(i < 0){
            i++;
            break;
        }
        k -= grades[i];
    }
    i++;
    printf("%d\n", j-k);

 
    return 0;
}