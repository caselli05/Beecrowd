#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
 
int main() {
    char* s1 = malloc(10*sizeof(char));
    char* s2 = malloc(10*sizeof(char));
    char* s3 = malloc(10*sizeof(char));
    if(s1==NULL || s2==NULL || s3==NULL){
        free(s1);
        free(s2);
        free(s3);
        return 1;
    }
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