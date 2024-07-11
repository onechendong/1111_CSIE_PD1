#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define URL_MAX 2048
#define KEY_MAX 100

typedef struct search_s {
    char *key;
    char *value;
} search_t;

search_t *get_param_by_key(char *url, char *key);

int main ()
{
    char url[URL_MAX + 1], key[KEY_MAX + 1];

    fgets(url, URL_MAX, stdin);
    scanf("%s", key );

    search_t  *param = get_param_by_key (url, key);

    if (param)
        printf("key: %s, value: %s", param->key, param->value);
    else
        printf("404 Not Found");
}

//function
search_t *get_param_by_key (char *url, char *key){
    search_t *ss;
    char ch;
    char *v=calloc(1,50);
    //char *k=calloc(1,50);
    for(int i=0;i<strlen(url);i++){
        ch=url[i];
        if(ch=key[0]){
            int j;
            for(j=0;j<strlen(key);j++){
                if((ch=url[i+j])==key[j]){   
                }
                else break;
            }
            if(j==strlen(key)-1){
                char *c=malloc(2);
                for (int k=j+2;c[0]!=(strlen(url)+1)||c[0]!='&';k++){
                    
                    c[0]=url[k];
                    c[1]='\0';
                    v=strcat(v,c);
                }
            }

            ss->key=key;
            ss->value=v;
            return ss;
        }
    }
    
    ss->key='\0';
    ss->value='\0';
    return ss;
}