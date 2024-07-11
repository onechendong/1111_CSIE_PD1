# include <stdio.h>
# include <string.h>

#define SIZE 25

int length(char pwd1[], char pwd2[]);

int compare(char pwd1[], char pwd2[]);

int content(char pwd1[]);

int main()
{
    char password1[SIZE];
    char password2[SIZE];
    
    // Enter the password
    scanf("%s", password1);
    // Enter the password again
    scanf("%s", password2);
    
    // Check Password
    // First: Check length
    if(length(password1, password2) == 1) {
        printf("Length does not match the requirements");
    }
    else {
        // Second: Check for consistency
        if(compare(password1, password2) == 1) {
            printf("Not the same password");
        }
        else {
            // Third: Check for compliance
            if(content(password1) == 1) {
                printf("Do not satisfy the conditions");
            }
            else {
                printf("Everything is good");
            }
        }
    }

    return 0;
}
//function
int length(char pwd1[], char pwd2[]) {
    if(strlen(pwd1)<6||strlen(pwd1)>16){
        return 1;
    }
    else if(strlen(pwd2)<6||strlen(pwd2)>16){
        return 1;
    }
    
}

int compare(char pwd1[], char pwd2[]) {
    for(int i=0;pwd1[i]!='\0'&&pwd2[i]!='\0';i++){
        if(pwd1[i]!=pwd2[i]){
        return 1;
        }
    }

}

int content(char pwd1[]) {
    int check[3]={0};
    for(int i=0;pwd1[i]!='\0';i++){
        if(pwd1[i]>='A'&&pwd1[i]<='Z'){
            check[0]=1;
        }
        else if(pwd1[i]>='a'&&pwd1[i]<='z'){
            check[1]=1;
        }
        else if(pwd1[i]>='0'&&pwd1[i]<='9'){
            check[2]=1;
        }
    }
    if(check[0]+check[1]+check[2]!=3){
        return 1;
    }
    
}