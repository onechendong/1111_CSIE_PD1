#include<stdio.h>

int lower_than_b(int score, int b);
int between_ba(int score, int b, int a);
int grater_than_a(int score, int a);

int main(){
    int std, time;
    scanf("%d", &std);
    int scr[std];
    for(int i=0;i<std;i++){
        scanf("%d", &scr[i]);
    }

    scanf("%d",&time);
    //printf("%d\n",scr[0]);
    //printf("%d\n", scr[1]);
    int b[time], a[time], x[time], y[time], z[time];
    /*
    printf("%d\n",scr[0]);
    printf("%d\n", scr[1]);
    */
    for(int i=0;i<time;i++){
        scanf("%d%d", &b[i], &a[i]);
    }
    //printf("%d\n",scr[0]);
    //printf("%d\n", scr[1]);
    for(int j=0;j<time;j++){
        x[j]=y[j]=z[j]=0;
        for(int i=0;i<std;i++){
            //printf("%d %d\n", scr[i], b[j]);
            x[j]+=lower_than_b(scr[i], b[j]);
            y[j]+=between_ba(scr[i], b[j], a[j]);
            z[j]+=grater_than_a(scr[i], a[j]);
        }
    }

    for(int n=0; n<time;n++){
        printf("%d %d %d\n", x[n], y[n], z[n]);
    }

    return 0;
}
//function
int lower_than_b(int score, int b){
    if(score<b){
        return 1;
    }
    else{
        return 0;
    }
}

int between_ba(int score, int b, int a){
    if(score>=b&&score<a){
        return 1;
    }
    else{
        return 0;
    }
}

int grater_than_a(int score, int a){
    if(score>=a){
        return 1;
    }
    else{
        return 0;
    }
}