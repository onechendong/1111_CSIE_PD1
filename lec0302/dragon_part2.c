#include<stdio.h>

int main(){
    int d1, d2, d3, d4, d5, d6, dp=100, hp=100;
    while(dp>0&&hp>0){
        scanf("%d%d%d%d%d%d", &d1, &d2, &d3, &d4, &d5, &d6);
        if((d1+d2+d3)%2==1){
            /*player attack*/
            if(d4<d5&&d5<d6){
                dp-=25;
            }
            else if(d4%2==d5%2||d5%2==d6%2){
                dp-=5;
            }
            else{
                dp=dp;
            }
        } 
        else{
            /*dragon attack*/
            if(d4-d5>d6||d5-d4>d6){
                hp-=15;
            }
            else if(d4+d5!=d6){
                hp-=5;
            }
            else{
                hp=hp;
            }

        }
    }
    if(dp>0){
        printf("Dragon wins");
    }
    else{
        printf("Player wins");
    }
    return 0;
}