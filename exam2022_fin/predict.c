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
    distory(x,y,land);
    printf("%d", num);
    return 0;
}

//function
void distory(int a, int b, int (*p)[5]){
    //int numf;
    //down
    c=a;
    d=b;
    c++;
    if(c<5&&c>=0&&d<5&&d>0){
        if(p[c][d]==2){
            num++;
            distory(c,d,p);
        }
        else if(p[c][d]==0){
            distory(c,d,p);
        }
        p[c][d]==3;
    }

    //up
    c=a;
    d=b;
    c--;
    if(c<5&&c>=0&&d<5&&d>0){
        if(p[c][d]==2){
            num++;
            distory(c,d,p);
        }
        else if(p[c][d]==0){
            distory(c,d,p);
        }
        p[c][d]==3;
    }

    //right
    c=a;
    d=b;
    d++;
    if(c<5&&c>=0&&d<5&&d>0){
        if(p[c][d]==2){
            num++;
            distory(c,d,p);
        }
        else if(p[c][d]==0){
            distory(c,d,p);
        }
        p[c][d]==3;
    }

    //left
    c=a;
    d=b;
    d--;
    if(c<5&&c>=0&&d<5&&d>0){
        if(p[c][d]==2){
            num++;
            distory(c,d,p);
        }
        else if(p[c][d]==0){
            distory(c,d,p);
        }
        p[c][d]==3;
    }
    
}