#include<stdio.h>

int full_adder_c(int a, int b ,int c);
int full_adder_x(int a, int b, int c);

# define LEN 5

int main() {
    int a[LEN], b[LEN], ans[LEN], c = 0;
    for(int i = 0 ; i < LEN; ++i) {
        scanf("%d", &a[i]);
    }
    for(int i = 0 ; i < LEN; ++i) {
        scanf("%d", &b[i]);
    }

    for(int i = 0 ; i < LEN ; ++i) {
        ans[i] = full_adder_x(a[i], b[i], c);
        c = full_adder_c(a[i], b[i], c);
    }
    for(int i = 0 ; i < LEN; ++i) {
        printf("%d ", ans[i]);
    }
    printf("%d", c);
}

//hw code
int full_adder_c(int a, int b ,int c) {
    int sum=a+b+c;
    switch(sum){
        case 0: return 0; break;
        case 1: return 0; break;
        case 2: return 1; break;
        case 3: return 1; break;
    }
}

int full_adder_x(int a, int b, int c) {
    int sum=a+b+c;
    switch(sum){
        case 0: return 0; break;
        case 1: return 1; break;
        case 2: return 0; break;
        case 3: return 1; break;
    }
}
