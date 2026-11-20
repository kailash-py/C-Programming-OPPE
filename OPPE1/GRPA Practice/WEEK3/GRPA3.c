#include<stdio.h>
int main(){
    int num,first,sec,third,fourth,sum;
    scanf("%d", &num);
    first=num/1000;
    sec=(num/100)%10;
    third=(num/10)%10;
    fourth=(num%10);
    sum=first+sec+third+fourth;
    printf("%d", sum);
    return 0;
}