#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        char plate[101];
        gets(plate);
        int plate_len = strlen(plate);
        if(plate_len != 8){
            printf("FAILURE\n");
            continue;
        }else if(isalpha(plate[0]) && isupper(plate[0]) && isalpha(plate[1]) && isupper(plate[1]) && isalpha(plate[2]) 
        && isupper(plate[2]) && plate[3] == '-' 
        && isdigit(plate[4]) && isdigit(plate[5]) && isdigit(plate[6]) && isdigit(plate[7])){
            if(plate[7] == '0' || plate[7] == '9'){
                printf("FRIDAY\n");
            }else if(plate[7] == '7' || plate[7] == '8'){
                printf("THURSDAY\n");
            }else if(plate[7] == '5' || plate[7] == '6'){
                printf("WEDNESDAY\n");
            }else if(plate[7] == '3' || plate[7] == '4'){
                printf("TUESDAY\n");
            }else if(plate[7] == '2' || plate[7] == '1'){
                printf("MONDAY\n");
            }
        }else{
            printf("FAILURE\n");
        }
    }

    return 0;
}