#include<stdio.h>

int main(){
    char ch;
    int num=0;
    for(int i=0;i<3;i++){
        ch=getchar();
        if(ch>='0'&&ch<='9'){
            num+=(ch-'0')*16;
        }
        else{
            num+=(ch-87)*16;
        }
        ch=getchar();
        if(ch>='0'&&ch<='9'){
            num+=(ch-'0');
        }
        else{
            num+=(ch-87);
        }
        printf("%d.",num);
        num=0;
    }
    
    ch=getchar();
    if(ch>='0'&&ch<='9'){
        num+=(ch-'0')*16;
    }
    else{
        num+=(ch-87)*16;
    }
    ch=getchar();
    if(ch>='0'&&ch<='9'){
        num+=(ch-'0');
    }
    else{
        num+=(ch-87);
    }
    printf("%d",num);
    return 0;
}