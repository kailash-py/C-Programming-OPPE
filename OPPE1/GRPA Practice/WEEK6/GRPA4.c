#include<stdio.h>
int main(){
    unsigned int num;
    unsigned char *p;
    scanf("%x", &num);

    p= (unsigned char *)&num;

    printf("%02X\n",p[3]);
    printf("%02X\n",p[2]);
    printf("%02X\n",p[1]);
    printf("%02X\n",p[0]);

    return 0;
}