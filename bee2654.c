#include <stdio.h>
#include <string.h>


typedef struct Gods{
    char name[101];
    int power;
    int kills;
    int died;
}Gods;


void sort(Gods* god, int n);


int main() {
    int n;
    scanf("%d", &n);
    Gods god[n];
    for(int i = 0; i < n; i++){
        char n[101];
        int p, k, d;

        scanf("%s %d %d %d", n, &p, &k, &d);

        strcpy(god[i].name, n);
        god[i].power = p;
        god[i].died = d;
        god[i].kills = k;
    }

    sort(god, n);

    printf("%s\n", god[0].name);

    return 0;
}


void sort(Gods* god, int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            // power
            if(god[i].power < god[j].power){
                Gods tmp = god[i];
                god[i] = god[j];
                god[j] = tmp;
            }
            else if(god[i].power == god[j].power){
                // kills
                if(god[i].kills < god[j].kills){
                    Gods tmp = god[i];
                    god[i] = god[j];
                    god[j] = tmp;
                }
                else if(god[i].kills == god[j].kills){
                    // deaths
                    if(god[i].died > god[j].died){
                        Gods tmp = god[i];
                        god[i] = god[j];
                        god[j] = tmp;
                    }
                    else if(god[i].died == god[j].died){
                        // name
                        if(strcmp(god[i].name, god[j].name) > 0){
                            Gods tmp = god[i];
                            god[i] = god[j];
                            god[j] = tmp;
                        }
                    }
                }
            }
        }
    }

    return;
}