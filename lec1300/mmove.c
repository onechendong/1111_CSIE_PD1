#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void MoveToTail();

int main(void) { 
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        struct node *tmp = malloc(sizeof(struct node));
        scanf("%d", &tmp->val);
        tmp->next = NULL;
        if(i == 1)
            head = tmp;
        else
            tail->next = tmp;
        tail = tmp;
    }
    MoveToTail();
    for(struct node *cur = head; cur != NULL; cur = cur->next) {
        printf("%d ", cur->val);
    }
    return 0;
}

//function
void MoveToTail() {
    int max=0;
    struct node *maximum;
    for(struct node *cur = head; cur != NULL; cur = cur->next){
        if(cur->val>max) max=cur->val;
    }
    for(struct node *cur = head; cur != NULL; cur = cur->next){
        if(head->val==max){
            head=cur->next;
            cur->next=NULL;
            tail->next=cur;
            break;
        }
        else if(tail->val==max){
            break;
        }
        else if(cur->val==max){
            cur->next=NULL;
            tail->next=cur;
        }
        else if(cur->next->val==max){
            maximum=cur->next;
            cur->next=cur->next->next;
            tail->next=maximum;
        }
    }
}
