#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 4096

void recovery(char *homework);

int main () {
    char homework[MAX_LEN + 1];
    
    // Get the homework content.
    fgets(homework, MAX_LEN , stdin);
    recovery(homework);

    // Print the recovered homework.
    fputs(homework, stdout);

    return 0;
}

//function
void recovery(char *homework) {
    char copy[MAX_LEN+1];
    strcpy(copy, homework);
    memset(homework, 0, MAX_LEN+1);
    char *token;
    token=strtok(copy, " \n");
    int len=strlen(token);
    {    for(int i=0;i<len-1;i++){
            
            /*if(isalpha(token[i])==0){
                memset(token, 0, len+1);
                break;
            }*/
            
            if(token[i]<'A'){
                memset(token, 0, len+1);
                break;
            }
            else if(token[i]>'Z'&&token[i]<'a'){
                memset(token, 0, len+1);
                break;
            }
            else if(token[i]>'z'){
                memset(token, 0, len+1);
                break;
            }
            
        }

        if (!(token[len-1] == '.' || token[len-1] == ',' || token[len-1] == '!' || token[len-1] == '?' || isalpha(token[len-1]))){
            memset(token, 0, len+1);
        }

        if((strlen(token))==1&&(token[0]==','||token[0]=='.'||token[0]=='?'||token[0]=='!')){
            memset(token, 0, len+1);
        }
    }
    strcat(homework, token);
    
    memset(token, 0, len+1);
    token=strtok(NULL, " \n");
    while(token!=NULL){
        len=strlen(token);
        if(strlen(token)>21||strlen(token)<1){
            memset(token, 0, len+1);
        }

        for(int i=0;i<len-1;i++){
            
            /*if(isalpha(token[i])==0){
                memset(token, 0, len+1);
                break;
            }*/
            
            if(token[i]<'A'){
                memset(token, 0, len+1);
                break;
            }
            else if(token[i]>'Z'&&token[i]<'a'){
                memset(token, 0, len+1);
                break;
            }
            else if(token[i]>'z'){
                memset(token, 0, len+1);
                break;
            }
            
        }

        if (!(token[len-1] == '.' || token[len-1] == ',' || token[len-1] == '!' || token[len-1] == '?' || isalpha(token[len-1]))){
            memset(token, 0, len+1);
        }

        if((strlen(token))==1&&(token[0]==','||token[0]=='.'||token[0]=='?'||token[0]=='!')){
            memset(token, 0, len+1);
        }

        int len_hw=strlen(homework);
        if((strlen(token))>0){
            if(homework[len_hw-1]!=0){
                strcat(homework," ");
            }
            
            strcat(homework,token);
        }
        token=strtok(NULL," \n");
    }

}