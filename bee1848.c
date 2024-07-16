#include <stdio.h>
#include <string.h>
 
int main() {
    int caws = 0;
    int last_number = 0;
    while(caws < 3){
        char input[8];
        gets(input);
        if(strcmp(input, "caw caw") == 0){
            caws++;
            printf("%d\n", last_number);
            last_number = 0;
        }else{
            int numbers[3];
            for(int i = 0; i < 3; i++){
                if(input[i] == '*'){
                    numbers[i] = 1;
                }else{
                    numbers[i] = 0;
                }
            }
            last_number += numbers[0]*4;
            last_number += numbers[1]*2;
            last_number += numbers[2];
        }
    }

 
    return 0;
}