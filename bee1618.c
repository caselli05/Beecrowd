#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int Ax, Ay;
        int Bx, By;
        int Cx, Cy;
        int Dx, Dy;
        int Rx, Ry;
        scanf("%d %d %d %d %d %d %d %d %d %d", &Ax, &Ay, &Bx, &By,&Cx, &Cy,&Dx, &Dy,&Rx, &Ry);
        if((Rx < Ax) || (Ry < Ay) || (Rx > Cx) || (Ry > Cy)){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }
 
    return 0;
}