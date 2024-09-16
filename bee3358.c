#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    int k;
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        char lastName[43];
        scanf("%s", lastName);

        int isHard = 0;
        for(int j = 0, n = strlen(lastName); j < n; j++){
            lastName[j] = tolower(lastName[j]);
            if(lastName[j] == 'a' || lastName[j] == 'e' || lastName[j] == 'i' || lastName[j] == 'o' || lastName[j] == 'u'){
                isHard = 0;
            }else{
                isHard++;
            }

            if(isHard == 3){
                lastName[0] = toupper(lastName[0]);
                printf("%s nao eh facil\n", lastName);
                break;
            }
        }

        if(isHard != 3){
            lastName[0] = toupper(lastName[0]);
            printf("%s eh facil\n", lastName);
        }


    }
 

    return 0;
}