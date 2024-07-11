#include<stdio.h>
#include<stdlib.h>
int array[1500];
int maxChandy( int size) ;
int main() {
    int size = 0;
    scanf("%d", &size);
    for(int i = 0 ; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    printf("%d\n", maxChandy( size));
    return 0;
}

//function
int maxChandy(int size) {
    int candy=0;
    if(array[0]>array[1]){
        candy+=array[0];
        for(int i=1;i<size-2;){
            if(array[i+1]>array[i+2]){
                candy+=array[i+1];
                array[i+1]=0;
                i=i+1;
            }
            else{
                candy+=array[i+2];
                array[i+2]=0;
                i=i+2;
            }
        }
        if(array[size-3]==0){
            candy+=array[size-1];
        }
        else{
            if(array[size-2]>array[size-1]){
                candy+=array[size-2];
            }
            else{
                candy+=array[size-1];
            }
        }
    }
    else{
        candy+=array[1];
        for(int i=2;i<size-2;){
            if(array[i+1]>array[i+2]){
                candy+=array[i+1];
                array[i+1]=0;
                i=i+1;
            }
            else{
                candy+=array[i+2];
                array[i+2]=0;
                i=i+2;
            }
        }
        if(array[size-3]==0){
            candy+=array[size-1];
        }
        else{
            if(array[size-2]>array[size-1]){
                candy+=array[size-2];
            }
            else{
                candy+=array[size-1];
            }
        }

    }


    return candy;
}
