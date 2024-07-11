#include<stdio.h>
#include<math.h>

int main(){
    double np=1, p;
    for(int i=0;i<5;i++){
        scanf("%lf", &p);
        np=np*p;
    }
    printf("%.15lf", np);

    return 0;
}