#include <stdio.h>

 
int main() {
    for(int i = 1; i != 0; i++){
        int password;
        scanf("%d", &password);
        if(password == 2002){
            printf("Acesso Permitido\n");
            return 0;
        }
        printf("Senha Invalida\n");
    }
    
    return 0;
}