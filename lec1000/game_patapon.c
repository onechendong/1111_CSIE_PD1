#include<stdio.h>
#include<string.h>

int run_command(char com[]);

int distance, blood, command_num=0;

int main(){
    int defend, i;
    char ch,command[25];
    scanf("%d%d", &distance, &blood);
    getchar();
    ch=getchar();
    //printf("%c", ch);
    while(ch!='\n'){
        for(i=0;ch!=','&&ch!='.'&&ch!='\n';i++){
            command[i]=ch;
            ch=getchar();
            //printf("%c", ch);
        }
        command[i++]='\0';
        defend=run_command(command);

        if(defend==0||defend==1){
            command_num++;
        }
        
        if(distance==0){
            printf("NO %d", blood);
            return 0;
        }
        else if(blood==0){
            printf("YES %d", command_num);
            return 0;
        }
        else if(command_num%10==0&&defend!=1){
            printf("NO %d", blood);
            return 0;
        }
        else if(command_num==30&&blood>0){
            printf("NO %d", blood);
            return 0;
        }
        ch=getchar();
    }
    
    printf("NO %d", blood);
    
    return 0;
}

//function
int run_command(char com[]){
    if(strcmp(com, "PATA PATA PATA PON")==0){
        distance--;
        return 0;
    }
    else if(strcmp(com, "PON PON PATA PON")==0){
        if(distance<=3){
        blood--;
        return 0;
        }
        return 0;
        /*blood--;
        return 0;
        */
    }
    else if(strcmp(com, "CHAKA CHAKA PATA PON")==0){
        distance++;
        return 1;
    }
    else{
        return 2;
    }
}