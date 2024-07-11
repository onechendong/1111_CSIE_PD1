#include<stdio.h>
#include<ctype.h>

int main(){
    int i;
    scanf("%d", &i);
    char ch;

    char ch_new_line;
    ch_new_line=getchar();

    for(int j=0;j<i;j++){
        ch=getchar();
        ch=toupper(ch);
        putchar(ch);
        while(ch!=';'&&ch!=','&&ch!='.'){
            ch=getchar();
            if(ch>='a'&&ch<='z'){
                putchar(ch);
            }
            else if(ch>='A'&&ch<='Z'){
                putchar(ch+'a'-'A');
            }
            else if(ch==' '){
                putchar(ch);
                ch=getchar();
                ch=toupper(ch);
                putchar(ch);
            }
        }
        putchar('\n');
    }

}