#include<stdio.h>
#include<stdlib.h>

int pull_radish(int *l, int *r, int *pos, int x);

int main() {
    int N, y, x;
    scanf("%d %d %d", &N, &y, &x);
    int *farm = malloc(N * sizeof(int));

    // initialize farm[N]
    for(int i=0; i<N; i++) {
        farm[i] = 1;
    }

    int total = pull_radish(&farm[0], &farm[N-1], &farm[y], x);
    printf("%d\n", total);
    for(int i=0; i<N; i++) {
        printf("%d ", farm[i]);
    }

    return 0;
}

//function
int pull_radish(int *l, int *r, int *pos, int x) {
    int *p=pos;
    int tt=0;
    for(p+=x;p<=r;p+=x){
        *p=0;
        tt++;
    }
    p=pos;
    for(p-=x;p>=l;p-=x){
        *p=0;
        tt++;
    }

    return tt;
}