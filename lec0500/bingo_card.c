#include<stdio.h>
#include<stdbool.h>

int main(){
    //get bingo card numbers
    int bingo_card[8][8];
    for(int row=0;row<8;row++){
        for(int col=0;col<8;col++){
            scanf("%d", &bingo_card[row][col]);
        }
    }
    //get host numbers & check wheather it is match with bingo card numbers
    int host_num;
    for(int num=0;num<64;num++){
        scanf("%d", &host_num);
        for(int row=0;row<8;row++){
            for(int col=0;col<8;col++){
                if(bingo_card[row][col]==host_num){
                    bingo_card[row][col]=false;
                }
            }
        }
    }
    
    //how many lines does bingo card get
    int line=0, point=0;
    //vertical 
    for(int row=0;row<8;row++){
        for(int col=0;col<8;col++){
            if(bingo_card[row][col]==false){
                point++;
            }
        }
        if(point==8){
            line++;
        }
        point=0;
    }
    //horizontal
    for(int col=0;col<8;col++){
        for(int row=0;row<8;row++){
            if(bingo_card[row][col]==false){
                point++;
            }
        }
        if(point==8){
            line++;
        }
        point=0;
    }
    //diagonal from array[0][0] to array[7][7]
    for(int col=0,row=0;col<8&&row<8;col++,row++){
        if(bingo_card[row][col]==false){
            point++;
        }
    }
    if(point==8){
        line++;
    }
    point=0;
    //diagonal from array[0][7] to array[7][0]
    for(int col=7,row=0;col>=0&&row<8;col--,row++){
        if(bingo_card[row][col]==false){
            point++;
        }
    }
    if(point==8){
        line++;
    }

    printf("%d", line);

    return 0;
}