#include<stdio.h>
#define NUMBER_1  0x38E38E38E38E3800LLU
#define NUMBER_2  0x2AAAAAAAAAAAAAAALLU
#define NUMBER_3  0x1C71C71C71C71C71LLU
#define NUMBER_4  0x7CE66C50E2840000LLU

int main(){
    int d1, d2, d3;
    scanf("%d%d%d", &d1, &d2, &d3);
    long long unsigned ans;
    ans=(((((d1*NUMBER_1%NUMBER_4)%NUMBER_4)+((d2*NUMBER_2%NUMBER_4)%NUMBER_4))%NUMBER_4)+((d3*NUMBER_3%NUMBER_4)%NUMBER_4))%NUMBER_4;
    printf("%llu",ans);
    return 0;
}