#include<stdio.h>

int main () {
    int n, drink[3][10];
    for(int a=0;a<3;a++){
        for(int b=0;b<10;b++){
            drink[a][b]=10;
        }
    }
    scanf("%d", &n);
    int num, buy, money=0;
    for(int i=0;i<n;i++){
        scanf("%d%d", &num, &buy);
        if(num>=1&&num<=10){
            for(int b=0;b<buy&&drink[0][num-1]>0;b++){
                drink[0][num-1]-=1;
                money+=10;
            }
        }
        else if(num>=11&&num<=20){
            for(int b=0;b<buy&&drink[1][num-11]>0;b++){
                drink[1][num-11]-=1;
                money+=20;
            }
        }
        else{
            for(int b=0;b<buy&&drink[2][num-21]>0;b++){
                drink[2][num-21]-=1;
                money+=30;
            }
        }
    }
    
    for(int a=0;a<3;a++){
        printf("%d", drink[a][0]);
        for(int b=1;b<10;b++){
            printf(" %d", drink[a][b]);
        }
        printf("\n");
    }
    printf("Earned: $%d", money);
    return 0;
}
