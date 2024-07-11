#include <stdio.h>
#include <stdlib.h>

char *strtok(char *s, const char *sep) {
  printf("strtok banned\n");
  exit(1);
}
char *strtok_r(char *str, const char *sep, char **lasts) {
  printf("strtok_r banned\n");
  exit(1);
}

char *strsep(char **stringp, const char *delim) {
  printf("strsep banned\n");
  exit(1);
}
char *gettoken(char *str, const char *sep);
int main() {
  char buffer[4096];
  char *sep = " \t\n;,.?!";
  char *word;
  int N;
  scanf("%d\n", &N);
  for (int i = 0; i < N; i++) {
    fgets(buffer, 4095, stdin);
    for (word = gettoken(buffer, sep); word != NULL;
         word = gettoken(NULL, sep)) {
      printf("%s\n", word);
    }
  }
}
#include<string.h>
//
char *gettoken(char *str, const char *sep){
    char *token=malloc(100);
    char *ch=malloc(sizeof(char)+1);
    char check;
    if(str==NULL){
        
    }
    else{
    for(int i=0;i<strlen(str);i++){
        ch[0]=str[i];
        ch[1]='\0';
        for(int j=0;j<strlen(sep);j++){
            check=sep[j];
            if(ch[0]!=check){
                token=strcat(token,ch);
            }
            else return token;

        }

    }
    }
}