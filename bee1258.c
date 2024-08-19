#include <stdio.h>
#include <string.h>


typedef struct Shirts
{
    char name[101];
    char color[15];
    char size;
}Shirts;

 

void sort(Shirts* shirt, int n);


int main() {
    int n;
    scanf("%d", &n);
    while(n != 0){
        Shirts shirt[n];
        for(int i = 0; i < n; i++){
            getchar();
            char name[101];
            gets(name);
            char color[15];
            scanf("%s ", color);
            char size;
            scanf("%c", &size);

            strcpy(shirt[i].color, color);
            strcpy(shirt[i].name, name);
            shirt[i].size = size;
        }

        sort(shirt, n);

        for(int i = 0; i < n; i++){
            printf("%s %c %s\n", shirt[i].color, shirt[i].size, shirt[i].name);
        }

        scanf("%d", &n);
        if(n != 0){
            printf("\n");
        }
    }
 
    return 0;
}


void sort(Shirts* shirt, int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(strcmp(shirt[i].color, shirt[j].color) != 0){
                if(strcmp(shirt[j].color, "branco") == 0){
                    Shirts tmp = shirt[i];
                    shirt[i] = shirt[j];
                    shirt[j] = tmp;
                }
            }           
            else if(strcmp(shirt[i].color, shirt[j].color) == 0){
                if(shirt[i].size < shirt[j].size){
                    Shirts tmp = shirt[i];
                    shirt[i] = shirt[j];
                    shirt[j] = tmp;
                }
                else if(shirt[i].size == shirt[j].size){
                    if(strcmp(shirt[i].name, shirt[j].name) > 0){
                        Shirts tmp = shirt[i];
                        shirt[i] = shirt[j];
                        shirt[j] = tmp;
                    }
                }
            }           
        }
    }

    return;
}