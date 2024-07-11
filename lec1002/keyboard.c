#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_LEN 1024
#define LINE_LEN 128

void convert(char *arr[], int count);
int main() {
  char line[BUFFER_LEN];
  char buffer[LINE_LEN][BUFFER_LEN];
  char *arr[LINE_LEN];

  int count = 0;
  while (fgets(line, BUFFER_LEN - 1, stdin) != NULL) {
    arr[count] = buffer[count];
    strncpy(buffer[count++], line, BUFFER_LEN - 1);
  }
  convert(arr, count);
  for (int i = 0; i < count; i++) {
    printf("%s", arr[i]);
  }
}

//function
void convert(char *arr[], int count){
    char output[1024*128];
    int col;
   /* memset(output,0,1028);*/
    char ch;
    char string[10];
    int button, time;
    for(int row=0;row<count;row++){
        for(col=0;arr[row][col]!='\n';col++){
            ch=arr[row][col];
            if(ch-'a'<=14&&ch-'a'>=0){
                button=(ch-'a')/3+2;
                time=(ch-'a')%3+1;

                string[0]='(';
                string[1]=button+'0';
                string[2]=')';
                string[3]=time+'0';
                string[4]='\0';
                strcat(output,string);
            }
            else if(ch-'a'>=15&&ch-'a'<=25){
                switch(ch-'a'){
                    case 15:case 16:case 17:case 18:
                    button=7;
                    time=(ch-'a')%15+1;

                    string[0]='(';
                    string[1]=button+'0';
                    string[2]=')';
                    string[3]=time+'0';
                    string[4]='\0';
                    strcat(output,string);
                    break;
                    case 19:case 20:case 21:
                    button=8;
                    time=(ch-'a')%19+1;

                    string[0]='(';
                    string[1]=button+'0';
                    string[2]=')';
                    string[3]=time+'0';
                    string[4]='\0';
                    strcat(output,string);
                    break;
                    case 22:case 23:case 24:case 25:
                    button=9;
                    time=(ch-'a')%22+1;

                    string[0]='(';
                    string[1]=button+'0';
                    string[2]=')';
                    string[3]=time+'0';
                    string[4]='\0';
                    strcat(output,string);
                    break;
                }
            }
            else{
                string[0]=ch;
                string[1]='\0';
                strcat(output,string);
            }
        }
        strcat(output, "*");
    }
    /*for(int n=0;n<5000;n++){
        printf("%c", output[n]);
    }*/
    int i=0;
    char array[LINE_LEN][BUFFER_LEN];
    for (int row = 0; row < count; row++) {
        //int col;
        for(col=0;output[i]!='\n';col++){
            if(output[i]=='*'){
                array[row][col]='\n';
                i++;
                break;
            }
            array[row][col]=output[i++];
        }
        
    }
    //printf("%c", array[0][0]);
    for (int j = 0; j < count; j++){
        arr[j]=array[j];
    }
    
}