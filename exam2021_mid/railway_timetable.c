#include<stdio.h>

int main () {
    int h, m;
    scanf("%d:%d", &h, &m);
    int N;
    scanf("%d", &N);
    int x, H, M, y, T, time=2000, train;
    for(int i=0;i<N;i++){
        scanf("%d %d:%d %d", &x, &H, &M, &y);
        if(H>h||(H==h&&M>=m)){
            T=H*60+M+y;
            if(T<time){
                time=T;
                train=x;
            }
        }
    }
    printf("%d", train);
    return 0;
}
