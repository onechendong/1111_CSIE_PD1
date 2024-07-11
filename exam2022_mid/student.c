#include<stdio.h>

int main () {
    char id[10], imposter[10];
    char ch, ch_1;
    int sum=0;
    ch=getchar();
    putchar(ch);
    while(ch!='\n'){
        if(ch<'0'||ch>'9'){
            	ch_1=ch;
                switch(ch){
                case 'A':case 'a': id[0]='0'; break;
                case 'B':case 'b': id[0]='1'; break;
                case 'C':case 'c': id[0]='2'; break;
                case 'D':case 'd': id[0]='3'; break;
                case 'E':case 'e': id[0]='4'; break;
                case 'F':case 'f': id[0]='4'; break;
                case 'H':case 'h': id[0]='6'; break;
                case 'I':case 'i': id[0]='7'; break;
                case 'J':case 'j': id[0]='8'; break;
                case 'K':case 'k': id[0]='9'; break;
                case 'L':case 'l': id[0]='0'; break;
                case 'N':case 'n': id[0]='2'; break;
                case 'P':case 'p': id[0]='3'; break;
                case 'Q':case 'q': id[0]='4'; break;
                case 'R':case 'r': id[0]='5'; break;
                case 'S':case 's': id[0]='6'; break;
                case 'T':case 't': id[0]='7'; break;
                case 'U':case 'u': id[0]='8'; break;
                case 'V':case 'v': id[0]='9'; break;
                case 'Z':case 'z': id[0]='2'; break;
                }
                //putchar(id[0]);
        }
        for(int i=1;i<9;i++){
            //ch=getchar();
            id[i]=getchar();
        }
        getchar('\n');
        for(int i=0;i<9;i++){
            sum+=(id[i]-'0')*(9-(id[i]-'0'));
            //printf("%d", sum);
        }
       
        if(sum%10!=0){
            imposter[0]=ch_1;
            putchar(imposter[0]);
            for(int i=1;i<9;i++){
                imposter[i]=id[i];
                putchar(imposter[i]);
            }

            //printf("%c", imposter[0]);
        }
        
        ch=getchar();
    }
	
    /*printf("%c", imposter[0]);
    for(int i=1;i<9;i++){
        printf("%c", imposter[i]);
    }
    */
    printf(" is the imposter!!!\n");
    
    return 0;
}
