/*
ES Problem 2 [20 Marks] – Series Sum
Consider the following series:
2 + 6 + 12 + 20 + 30 + ...
The first term is 1 × 2 = 2, the second term is 2 × 3 = 6, the third term is 3 × 4 = 12, and so
on. In general, the i-th term is i * (i + 1).
Write a C program that takes a positive integer n as input and prints the sum of the first
n terms of the above series.
Input Format
The first line contains a positive integer n .
Output Format
Print a single integer representing the sum of the first n terms of the series.
Sample Input 1
3
Sample Output 1
20
Explanation: The first three terms are 2, 6, 12. Sum = 2 + 6 + 12 = 20.
Sample Input 2
5
(The output is cut off in the PDF. By the formula it works out to 70.)
*/
#include<stdio.h>
int main(){
    int n, sum=0;
    scanf("%d", &n);

    //i*(i+1)
    for ( int i=1; i<=n;i++){
        sum+=i*(i+1);
    }
    printf("%d", sum);
    return 0;
}