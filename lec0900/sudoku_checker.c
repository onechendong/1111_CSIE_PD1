#include <stdio.h>
#define NUM 9

void check_sudoku(int (*grid_p)[NUM]);

int main(void){
    int grid[NUM][NUM]; // sudoku puzzle
    for(int i = 0; i < NUM; ++i){
        for(int j = 0; j < NUM; ++j){
            scanf("%d", &grid[i][j]);
        }
    }
    check_sudoku(grid);
    return 0;
}

//function
void check_sudoku(int (*grid_p)[NUM]){
    for(int row=0;row<NUM;row++){
        for(int col=0;col<NUM;col++){
            for(int chk_row=col+1;chk_row<NUM;chk_row++){
                if((*(grid_p+row))[col]==(*(grid_p+row))[chk_row]){
                    (*(grid_p+row))[col]=0;
                    (*(grid_p+row))[chk_row]=0;
                }
            }
            for(int chk_col=col+1;chk_col<NUM;chk_col++){
                if((*(grid_p+row))[col]==(*(grid_p+chk_col))[col]){
                    (*(grid_p+row))[col]=0;
                    (*(grid_p+chk_col))[col]=0;
                }
            }
        }
    }
/*
    for(int row=0;row<7;row+=3){
        for(int col=0;col<7;col+=3){
            for(int row_c=row+1;row_c<=row+2;row_c++){
                for(int col_c=col+1;col_c<=col+2;col_c++){
                    if((*grid_p+row)[col]==(*grid_p+row_c)[col_c]){
                        (*grid_p+row)[col]=0;
                        (*grid_p+row_c)[col_c]=0;
                    }
                }
            }
        }
    }
    for(int row=0;row<7;row+=3){
        for(int col=1;col<8;col+=3){
            if((*grid_p+row)[col]==(*grid_p+row+1)[col-1]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+1)[col-1]=0;}
            else if((*grid_p+row)[col]==(*grid_p+row+1)[col+1]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+1)[col+1]=0;}
            else if((*grid_p+row)[col]==(*grid_p+row+2)[col-1]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+2)[col-1]=0;}
            else if((*grid_p+row)[col]==(*grid_p+row+2)[col+1]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+2)[col+1]=0;}
        }
    }
    for(int row=0;row<7;row+=3){
        for(int col=2;col<9;col+=3){
            if((*grid_p+row)[col]==(*grid_p+row+1)[col-2]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+1)[col-2]=0;}
            else if((*grid_p+row)[col]==(*grid_p+row+1)[col-1]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+1)[col-1]=0;}
            else if((*grid_p+row)[col]==(*grid_p+row+2)[col-2]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+2)[col-2]=0;}
            else if((*grid_p+row)[col]==(*grid_p+row+2)[col-1]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+2)[col-1]=0;}
        }
    }
    for(int row=1;row<8;row+=3){
        for(int col=0;col<7;col+=3){
            if((*grid_p+row)[col]==(*grid_p+row+1)[col+1]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+1)[col+1]=0;}
            else if((*grid_p+row)[col]==(*grid_p+row+1)[col+2]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+1)[col+2]=0;}
        }
    }
    for(int row=1;row<8;row+=3){
        for(int col=1;col<8;col+=3){
            if((*grid_p+row)[col]==(*grid_p+row+1)[col-1]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+1)[col-1]=0;}
            else if((*grid_p+row)[col]==(*grid_p+row+1)[col+1]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+1)[col+1]=0;}
        }
    }
    for(int row=1;row<8;row+=3){
        for(int col=2;col<9;col+=3){
            if((*grid_p+row)[col]==(*grid_p+row+1)[col-1]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+1)[col-1]=0;}
            else if((*grid_p+row)[col]==(*grid_p+row+1)[col-2]){
                (*grid_p+row)[col]=0;
                (*grid_p+row+1)[col-2]=0;}
        }
    }
*/
     for(int row=0;row<NUM;row++){
        for(int col=0;col<NUM;col++){
            if((*(grid_p+row))[col]==0)
            printf("(%d,%d)\n", row, col);
        }
     }
}