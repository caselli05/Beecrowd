#include <stdio.h>
#include <string.h>

int toOneDigit(int number);

int main() {
    int n; 
    scanf("%d\n", &n);
    while(n != 0){
        for(int i = 0; i < n; i++){
            char number[1001];
            gets(number);
            int zeros = 0;
            int uns = 0;
            for(int j = 0, k = strlen(number); j < k; j+=2){
                zeros += (number[j]-'0');
            }
            for(int j = 1, k = strlen(number); j < k; j+=2){
                uns += (number[j]-'0');
            }
            
            zeros = toOneDigit(zeros);
            uns = toOneDigit(uns);

            printf("%d\n", uns+zeros);
        }
        scanf("%d\n", &n);
    }
    return 0;
}


int toOneDigit(int number){
    int tmp = number;
    number = 0;
    while(tmp > 0){
        number += tmp%10;
        tmp /= 10;
    }
    number += tmp;
    // if(number < 10){
    //     return number;
    // }
    // return toOneDigit(number);
    return number;
}