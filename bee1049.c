#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
 
int main() {
    char s1[11], s2[11], s3[11];
    scanf("%s %s %s", s1, s2, s3);

    if(strcmp(s1, "vertebrado") == 0){
        if(strcmp(s2, "ave") == 0){
            if(strcmp(s3, "carnivoro") == 0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{ //mamifero
            if(strcmp(s3, "onivoro") == 0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{ //invertebrado
        if(strcmp(s2, "inseto") == 0){
            if(strcmp(s3, "hematofago") == 0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{ //anelideo
            if(strcmp(s3, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }

    return 0;
}