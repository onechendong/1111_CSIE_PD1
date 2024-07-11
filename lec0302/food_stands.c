#include<stdio.h>

int main () {
    int max, min, mid;
    scanf("%d", &mid);
    max=min=mid;
    while(mid!=-1){
            if(mid>max){
        	    max=mid;
            }
            else if(mid<min){
        	    min=mid;
            }
            else{
                mid=mid;
            }
            scanf("%d", &mid);
        }
    printf("%d", max-min);
    
    return 0;
}
