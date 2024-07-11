#include <stdio.h>
#include <stdlib.h>

struct ESPer {
    char name[64];
    int level;
};

int cmp(const void *a, const void *b);
void sort_level(struct ESPer *arr, int length);

int main()
{
    int n;
    struct ESPer tokiwadai[100];

    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        scanf("%d %s", &(tokiwadai[i].level), tokiwadai[i].name);
    }

    sort_level(tokiwadai, n);

    for(int i = 0;i < n;++i) {
        printf("%d %s\n", tokiwadai[i].level, tokiwadai[i].name);
    }

    return 0;
}

//function
/*
int cmp(const void *a, const void *b) {
    int cmp_a=*(int*)a;
    int cmp_b=*(int*)b;
    if(cmp_a<cmp_b){
        return -1;
    }
    else if(cmp_a==cmp_b){
        return 0;
    }
    else{
        return 1;
    }
    

    struct ESPer *pa=(struct ESPer*)a;
    struct ESPer *pb=(struct ESPer*)b;
    int num1=pa->level;
    int num2=pb->level;
    return (int)num2-num1;
    
   return (*(ESPer*)a)->level>(*(ESPer*)b)->level?1:-1;
}


void sort_level(struct ESPer *arr, int length) {
    qsort(arr, length, sizeof(arr), cmp);
}
*/
void sort_level(struct ESPer *arr, int length){
    struct ESPer tmp;
    
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-1-i;j++){
                if(arr[j].level>arr[j+1].level){
                    tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                }
        }
    }
}

