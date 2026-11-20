#include<stdio.h>
void DecimalToBinary(int D, long int *B){
    long int bin=0;
    long int place=1;

    if (D==0){
        *B=0;
        return;
    }
    while (D>0){
        bin = bin + (D%2)*place;
        D=D/2;
        place=place*10;
    }
    *B=bin;
}
int main()
{
    int D;
    long int B; 
    scanf("%d",&D);    
    DecimalToBinary(D, &B);
    printf("%ld", B);
    return 0;
}