#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char password[101];
    while(gets(password) != EOF){
        int upper = 0;
        int lower = 0;
        int numbers = 0;
        int len = 0;
        len = strlen(password);
        if(len < 6 || 32 < len){
            printf("Senha invalida.\n");
            continue;
        }
        for(int i = 0; i < len; i++){
            if(isupper(password[i])){
                upper++;
            }else if(islower(password[i])){
                lower++;
            }else if(isdigit(password[i])){
                numbers++;
            }else{
                upper = 0;
                continue;
            }
        }
        if(upper != 0 && lower != 0 && numbers != 0){
            printf("Senha valida.\n");
        }else{
            printf("Senha invalida.\n");
        }
    }
    

    return 0;
}