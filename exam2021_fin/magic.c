#include<stdio.h>

int main () {
    int N, std;
    unsigned long long int tmp, num;
    int arr[64];
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &std);
        getchar();
        scanf("%llx", &num);
        num=num>>(std);
        num=num<<(std);
        num=num<<(56-std);
        num=num>>(56-std);
        //printf("%d", num);
        tmp=num;
        for(int j=0;j<64;j++){
            tmp=tmp<<j;
            arr[j]=tmp>>63;
            tmp=num;
        }
        for(int j=0;j<8;j++){
            for(int k=0;k<8;k++){
                printf("%d", arr[j*8+k]);
            }
            printf(" ");
        }
        printf("\n");
        /*for(int j=0;j<64;j++){
            arr[j]=0;
        }
        num=std=0;*/
    }
    return 0;
}
