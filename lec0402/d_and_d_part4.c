#include<stdio.h>

int main(){
    unsigned long long int N, temp;
    unsigned long long int byte[4];
    int d1, d2, d3, d4;
    scanf("%llu%d%d%d%d", &N, &d1, &d2, &d3, &d4);
    byte[1-1]=(N&0xff000000)>>24;
    byte[2-1]=(N&0x00ff0000)>>16;
    byte[3-1]=(N&0x0000ff00)>>8;
    byte[4-1]=(N&0x000000ff);
    temp=(byte[d1-1]^byte[d2-1])<<24;
    temp+=(byte[d2-1]&byte[d3-1])<<16;
    temp+=(byte[d3-1]|byte[d1-1])<<8;
    temp+=((~byte[d4-1])&0x000000ff);
    //rotare
    unsigned long long int temp_right, temp_left;
    temp_right=(temp>>(d1+d2+d3+d4));
    temp_left=(temp<<(32-d1-d2-d3-d4));
    temp=(temp_right+temp_left);
    //Xor the upper 16 bits of temp with the lower 16 bits of temp
    unsigned long long int temp_upper, temp_lower;
    //temp_upper=temp>>16;
    temp_upper=(temp&0xffff0000)>>16;
    temp_lower=temp&0x0000ffff;
    temp=(temp_upper^temp_lower);
    printf("%llu", temp);

    return 0;
}