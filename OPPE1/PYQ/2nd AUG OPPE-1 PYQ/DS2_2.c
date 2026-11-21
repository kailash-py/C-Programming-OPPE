/*
DS Problem 2 [20 Marks] – countPrimeErasures
An arithmetic engine reduces a number to a target state using its prime properties.
Starting from a number n (where n ≥ 2), the system repeatedly performs the following
operation:
next = current - (largest prime factor of current)
Note: If the current number is itself a prime number, then the number itself is considered
its largest prime factor.
The process continues until the number becomes 0.
Create a function countPrimeErasures(number) which takes an integer number as input
and returns the number of reduction steps required to reach the value 0.
Input Format
The first line contains an integer number .
Output Format
Print the number of reduction steps as an integer.
Constraints
2 ≤ number ≤ 10^5
Sample Input
C Programming OPPE-1 – All Questions
Page 11 of 26
18
Sample Output
4
Explanation (cut off in the PDF), Step 1: Current = 18, largest prime factor = 3, next = 18 − 3
= 15
*/
#include<stdio.h>
// #include<stdbool.h>
int isPrime(int n){
    // int count=0;
    if (n<2){ return 0;}
    for (int i = 2; i<n;i++){
        if (n%i==0){ return 0;}
    }
    return 1;
}
int largestPrimeFactor(int n){
    int primeFactor;
    for (int i=1; i<n;i++){
        if ( (n%i==0)&& isPrime(i)==1){
            primeFactor=i;
        }
        else{ continue;}
    }
    return primeFactor;
}
int countPrimeErasures(int n){
    int next,steps=0;
    
    while(n>0){
        n= n- largestPrimeFactor(n);
        steps+=1;


    }
    return steps;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", countPrimeErasures(n));
    return 0;
}

