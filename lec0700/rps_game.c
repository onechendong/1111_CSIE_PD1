#include<stdio.h>
#include<math.h>

void game(char *a, char *b, char ch);

int N, winner;

int main () {
    scanf("%d", &N);
    getchar();
    char rps[N+1], sb[(log(N)/log(2))+1], *a, *b;

    for(int i=1;i<=N;i++){
        rps[i]=getchar();
    }
    getchar();

    for(int j=1;j<=(log(N)/log(2));j++){
        sb[j]=getchar();
    }
    
    for(int i=1;i<=(log(N)/log(2));i++){
        for(int j=1;j<=N;){
            if(rps[j]!='l'){
                *a=rps[j];
                for(int k=j+1;k<=N;){
                    if(rps[k]!='l'){
                        *b=rps[k];
                    }
                }
            }
            j=k+1;
            game(*a, *b, sb[i]);
        }
    }
    printf("%d", winner);

    return 0;
}

//function
void game(char *a, char *b, char ch){
    if(*a=='r'&&*b=='s'){
        *b='l';
    }
    else if(*a=='r'&&*b=='p'){
        *a='l';
    }
    else if(*a=='s'&&*b=='r'){
        *a='l';
    }
    else if(*a=='s'&&*b=='p'){
        *b='l';
    }
    else if(*a=='p'&&*b=='r'){
        *b='l';
    }
    else if(*a=='p'&&*b=='s'){
        *a='l';
    }
    else{
        if(ch=='b'){
            if(&*a>&*b) *b='l';
            else *a='l';
        }
        else{
            if(&*a>&*b) *a='l';
            else *b='l';
        }
        
    }
}