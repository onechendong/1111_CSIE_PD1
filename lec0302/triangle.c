#include <stdio.h>

int main(){
    int i, j;
    scanf("%d%d", &i, &j);
    switch(i){
        case 1: 
        for( ;j>0;j--){
            for(int a=j;a>0;a--){
                printf("*");
            }
            printf("\n");
        } 
        break;

        case 2: 
        for(int b=1;b<=j;b++){
            for(int a=b;a>0;a--){
                printf("*");
            }
            printf("\n");
        } 
        break;

        case 3:
        for(int b=0 ;j>0;j--,b++){
            for(int c=b;c>0;c--){
                printf(" ");
            }
            for(int a=j;a>0;a--){
                printf("*");
            }
            printf("\n");
            
        }
        break;

        case 4:
        for(int b=1,c=j-1;b<=j;b++,c--){
            for(int d=c;d>0;d--){
                printf(" ");
            }
            for(int a=b;a>0;a--){
                printf("*");
            }
            printf("\n");
        }

    }

    return 0;
}