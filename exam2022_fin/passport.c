#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 15

void convert (char *last, char *first);

int main()
{
    char last_name[MAX_LEN + 2];
    char first_name[MAX_LEN + 2];
    
    // Enter last name
    fgets(last_name, MAX_LEN*2 , stdin);
    if(last_name[strlen(last_name) - 1] == '\n')
        last_name[strlen(last_name) - 1] = '\0';
    
    // Enter first name
    fgets(first_name, MAX_LEN*2, stdin);
    if(first_name[strlen(first_name) - 1] == '\n')
        first_name[strlen(first_name) - 1] = '\0';
    
    // Convert and print the name by using the function convert
    convert(last_name, first_name);
    
    return 0;
}

//function
void convert (char *last, char *first) {
    char ch;
    if(strlen(last)>15){
        printf("illegal");
        return;
    }
    else if(strlen(first)>15){
        printf("illegal");
        return;
    }

    //lastname
    for(int i=0;i<strlen(last);i++){
        ch=last[i];
        if(ch>='a'&&ch<='z'){
            putchar(ch-'a'+'A');
        }
        else if(ch>='A'&&ch<='Z'){
            putchar(ch);
        }
        else if(ch==' '){
            putchar(ch);
        }
        //ch=getchar();
    }
    //
    printf(", ");
    //firstname
    for(int j=0;j<strlen(first);j++){
        ch=first[j];
        if(ch>='a'&&ch<='z'){
            putchar(ch-'a'+'A');
        }
        else if(ch>='A'&&ch<='Z'){
            putchar(ch);
        }
        else if(ch==' '){
            putchar('-');
        }
        //ch=getchar();
    }

}