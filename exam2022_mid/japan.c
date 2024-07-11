#include<stdio.h>
#include<math.h>

int main () {
    int x, money;
    scanf("%d", &x);
    if(x<5000){
        money=lround((x*(1+0.08)*0.2966)-(x*(1+0.1)*0.2178));
    }
    else{
        money=lround((x*0.2966)-(x*0.2178));
    }
    if(money<0){
        money=-money;
    }
    
    printf("%d", money);

    return 0;
}
