#include <stdio.h>                                  
#include <string.h>                                                                                                                                                                          

#define MAX_CAND_CNT 20
#define MAX_NAME_LEN 32
struct ballot_counter_s {
    int count;
    char name[MAX_NAME_LEN];
} counter[MAX_CAND_CNT];
int cand_cnt;

void count(const char *name);
const char *winner();

int main()
{
    scanf("%d", &cand_cnt);
    for (int i = 0; i < cand_cnt; i++) {
        scanf("%s", counter[i].name);
        counter[i].count = 0;
    }

    char name[MAX_NAME_LEN];
    while (scanf("%s", name) != EOF)
        count(name);

    for (int i = 0; i < cand_cnt; i++)
        printf("%s %d\n", counter[i].name, counter[i].count);

    printf("%s\n", winner());

    return 0;
}

//function
void count(const char *name){
    for(int i=0;i<cand_cnt;i++){
        if((strcmp(name, counter[i].name))==0){
            counter[i].count++;
        }
        continue;
    }
}

const char *winner(){
    //winner=counter[cand_cnt+1]
    char winner[MAX_NAME_LEN];
    int winner_number;
    strcpy(winner,counter[0].name);
    winner_number=0;
    for(int i=0;i<cand_cnt;i++){
        if(counter[i].count>counter[winner_number].count){
            strcpy(winner,counter[i].name);
            winner_number=i;
        }
    }
    strcpy(counter[cand_cnt+1].name, winner);
    return counter[cand_cnt+1].name;

}