#include<stdio.h>
#include<stdlib.h>

struct node{
    int number;
    struct node *next;
};

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    struct node *first=malloc(sizeof(struct node));
    struct node *last=malloc(sizeof(struct node));
    struct node *tmp = malloc(sizeof(struct node));
    
    first->number=1;
    first->next=NULL;
    tmp=first;
    for(int i=2;i<n;i++){
        struct node *new = malloc(sizeof(struct node));
        tmp->next=new;
        tmp=tmp->next;
        new->number=i;
        new->next=NULL;
    }
    last->number=n;
    last->next=NULL;
    tmp->next=last;

    if(m==n){
        for(int i=0;i<m-1;i++){
        printf("%d ", first->number);
        //first=first->next->next;
        last->next=first->next;
        last=last->next;
        first=last->next;
        last->next=NULL;
        }
        printf("%d ", last->number);
        return 0;
    }

    for(int i=0;i<m;i++){
        printf("%d ", first->number);
        last->next=first->next;
        last=last->next;
        first=last->next;
        last->next=NULL;
        
    }

    return 0;
}