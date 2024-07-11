#include<stdio.h>

int main(){
    long i, s=0;
    scanf("%ld", &i);
    long a[i-1], sum[i-1];
    for(long j=0;j<i;j++){
        scanf("%ld", &a[j]);
        s+=a[j];
        sum[j]=s;
        if(sum[j]%a[j]==0){
            printf("%ld %ld\n", sum[j], a[j]);
        }
    }
    
    return 0;
}