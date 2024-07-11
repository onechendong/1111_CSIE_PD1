#include <stdio.h>
void fraction_adder(int a_numerator, int a_denominator, int b_numerator,
              int b_denominator, int *c_numerator_ptr, int *c_denominator_ptr);
int main() {
  int a_numerator, a_denominator, b_numerator, b_denominator;
  scanf("%d%d%d%d", &a_numerator, &a_denominator, &b_numerator, &b_denominator);
  int c_numerator, c_denominator;
  fraction_adder(a_numerator, a_denominator, b_numerator, b_denominator, &c_numerator,
           &c_denominator);
  printf("%d/%d\n", c_numerator, c_denominator);
}

//function
void fraction_adder(int a_numerator, int a_denominator, int b_numerator, int b_denominator, int *c_numerator_ptr, int *c_denominator_ptr) {
    int n, d;
    n=a_numerator*b_denominator+b_numerator*a_denominator;
    d=a_denominator*b_denominator;
    for(int i=n;i>=1;i--){
        if(n%i==0&&d%i==0){
            n/=i;
            d/=i;
        }
    }
    *c_numerator_ptr=n;
    *c_denominator_ptr=d;
  return;
}