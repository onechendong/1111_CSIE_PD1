#include <stdio.h>
#define ARR_MAX 1000
void sort_section(int *ptr, int *qtr);
int main() {
  int N, a, b;
  scanf("%d%d%d", &N, &a, &b);
  int arr[ARR_MAX] = {0};
  for (int i = 0; i < N; i++) {
    scanf("%d", arr + i);
  }
  sort_section(&arr[a], &arr[b]);
  for (int i = 0; i < N; i++) {
    printf("%d ", *(arr + i));
  }
}

//function
void sort_section(int *ptr, int *qtr) {
    int tmp;
    int size;
    if(ptr<qtr){
        size=qtr-ptr+1;
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-1-i;j++){
                if(ptr[j]>ptr[j+1]){
                    tmp=ptr[j];
                    ptr[j]=ptr[j+1];
                    ptr[j+1]=tmp;
                }
            }
            for(int i=0;i<size;i++){
                printf("%d ", ptr[i]);
            }
            putchar('\n');
        }
    }
    else{
        size=ptr-qtr+1;
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-1-i;j++){
                if(qtr[j]>qtr[j+1]){
                    tmp=qtr[j];
                    qtr[j]=qtr[j+1];
                    qtr[j+1]=tmp;
                }
            }
            for(int i=0;i<size;i++){
                printf("%d ", qtr[i]);
            }
            putchar('\n');
        }
    }  
}