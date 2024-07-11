#include<stdio.h>
typedef int Strength;
typedef int Obedience;

#define INIT_STRENGTH 50
#define INIT_OBEDIENCE 20

#define STRENGTH_EAT 5
#define OBEDIENCE_EAT 2

#define STRENGTH_TRAIN 4
#define OBEDIENCE_TRAIN 5

#define LEARN_STRENGTH 55
#define LEARN_OBEDIENCE 28

int main(){
    char ch;
    Strength s=INIT_STRENGTH;
    Obedience o=INIT_OBEDIENCE;
    int q=0;
    ch=getchar();
    goto e_or_t;
    while(ch!='\n'){
        ch=getchar();
        e_or_t:
        switch(ch){
            case 'e':
            s+=STRENGTH_EAT;
            o-=OBEDIENCE_EAT;
            break;

            case 't':
            s-=STRENGTH_TRAIN;
            o+=OBEDIENCE_TRAIN;
            break;
        }
        if(o>=LEARN_OBEDIENCE&&s<=LEARN_STRENGTH){
            q++;
            o=INIT_OBEDIENCE;
        }

       
    }
    q>=5?printf("Yes"):printf("No");

    return 0;
}