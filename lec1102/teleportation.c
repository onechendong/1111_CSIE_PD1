#include <stdio.h>

unsigned long long construct(unsigned char parts[16]);

int main()
{
    unsigned char parts[16];
    for (int i = 0; i < 16; i++)
        scanf("%hhx", parts + i);

    printf("%llu", construct(parts));

    return 0;
}

//function
unsigned long long construct(unsigned char parts[16]){
    int unsigned long long l1=0, l2=0;
    for(int i=0;i<8;i++){
        l1+=((unsigned long long)parts[i]<<i*8);
        l2+=((unsigned long long)parts[i+8]<<i*8);
    }
    return (l1^l2);
}