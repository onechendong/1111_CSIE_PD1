#include<stdio.h>

int main(){
    float x, h, y;
    scanf("%f", &x);
    h=0;
    for(int i=0;i<5;i++){
        h=0.9*x+0.1*h-51;
        
        y=-0.98*h+153;
        x=y;
        printf("%.1f ", y);
    }

    return 0;
}