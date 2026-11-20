/*
Write a program that accept an integer n and print the factorial of n.

Sample Input

5
Output

120
*/
#include<stdio.h>
int factorial(int n){
    if (n==0) {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d", factorial(n));
    return 0;
}
