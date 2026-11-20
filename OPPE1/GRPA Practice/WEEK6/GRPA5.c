#include<stdio.h>
int main(){
    unsigned int num;
    unsigned char *p;

    scanf("%x", &num);
    p=(unsigned char *)&num;

    printf("%02X",p[1]);
    printf("%02X",p[0]);
    printf("%02X",p[3]);
    printf("%02X",p[2]);
}

/* Little endian memory
0:78
1: 56
2:34
3:12
*/