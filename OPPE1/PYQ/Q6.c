#include<stdio.h>
int largestDigit(int n){
    int max=0;
    while (n>0){
        int digit = n%10;
        if (digit>max){
            max=digit;
        }
        n/=10
    }
    return max;
}
void countSteps(int *number, int *steps){
    int n= *number;
    *steps=0;
    while(n>0){
        int maxdigit= largestDigit(n);
        n=n-maxdigit;
        (*steps)++;
    }
}
int main(){
    int n, steps;
    scanf("%d", &n);
    countSteps(&n, &steps);
    printf("Steps: %d\n", steps);
    return 0;
    
}