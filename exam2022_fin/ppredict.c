#include<stdio.h>

void distory(int a, int b, int (*p)[5]);

int num=0;
int x, y;
int c, d;
int land[5][5];

int main () {
    
    scanf("%d%d",&x, &y);
    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            scanf("%d", &land[row][col]);
        }
    }
    //distory(x,y,land);
    int cnt=0;
    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            if(land[row][col]==2){
                cnt++;
            }
        }
    }
    printf("%d", cnt-3);
    return 0;
}