#include<stdio.h>

int main(){
    int credit, sum_credit=0;
    float gpa, grade_point=0.0, numerator=0.0;
    char ch;
    ch=getchar();
    credit=ch-'0';
    ch=getchar();
    sum_credit+=credit;
    while(ch!='\n'){
            if(ch>='1'&&ch<='9'){
            numerator+=credit*grade_point;
            credit=0;
            grade_point=0;
            credit=ch-'0';
            sum_credit+=credit;
            }
            else{
                switch(ch){
                    case 'A': 
                    grade_point+=4.0;
                    break;
                    case 'B':
                    grade_point+=3.0;
                    break;
                    case 'C':
                    grade_point+=2.0;
                    break;
                    case '+':
                    grade_point+=0.3;
                    break;
                    case '-':
                    grade_point-=0.3;
                    break;
                    case 'F':
                    grade_point+=0;
                    break;
                }
            }
        
        ch=getchar();
    }
    numerator+=credit*grade_point;

    gpa=numerator/sum_credit;
    printf("%.2f", gpa);

    return 0;
}