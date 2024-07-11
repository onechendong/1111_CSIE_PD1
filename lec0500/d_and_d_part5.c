#include<stdio.h>

int main(){
    int lock[6]={0};
    int d1, d2;
    for(int i=0;i<75;i++){
        scanf("%d%d", &d1, &d2);
        if(d2%2==0){
            lock[d1-1]--;
        }
        else{
            lock[d1-1]++;
        }
    }

    for(int i=0;i<6;i++,putchar(' ')){
        lock[i]%=10;
        if(lock[i]>=0){
            printf("%d", lock[i]);
        }
        else{
            printf("%d", lock[i]+10);
        }
    }

    return 0;
}