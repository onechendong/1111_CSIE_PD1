#include<stdio.h>

int function(int a);

int M[20][21]={0};

int main () {
    int N, sum=0;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &M[i][0]);
        for(int j=0;j<M[i][0];j++){
            scanf("%d", &M[i][j+1]);
        }
    }
    for(int row=0;row<N;row++){
        for(int col=1;col<N;col++){
            M[row][20]+=function(M[row][col]);
        }
    }
    for(int i=0;i<N;i++){
        //printf("%d\n", M[i][20]);
        if(M[i][0]==0){
            sum+=1;
        }
        sum+=M[i][20];
    }
    printf("%d", sum);

    return 0;
}

int function(int a){
    int re=0;
    if(a==0){
        return 0;
    }
    else if(M[a-1][0]==0){
        return 1;
    }
    else{
        for(int i=0;i<M[a-1][0];i++){
            re+=function(M[a-1][i+1]);
        }
        return re;
    }
    

}