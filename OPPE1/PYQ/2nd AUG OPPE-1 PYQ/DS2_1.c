/*
DS – Section 2 [Attempt Both, 2 × 20 Marks]
DS Problem 1 [20 Marks] – countProductPairs
For a given number n , the system evaluates pairs (i, j) where 1 ≤ i ≤ j ≤ n.
A pair (i, j) is considered valid if the product of i and j is an exact multiple of the sum of i
and j:
(i * j) mod (i + j) = 0
Create a function countProductPairs(n) which takes an integer n as input and returns
the number of valid pairs (i, j) satisfying the above condition.
Input Format
C Programming OPPE-1 – All Questions
Page 10 of 26
The first line contains an integer n .
Output Format
Print the number of valid pairs.
Sample Input
6
Sample Output
4
Explanation (cut off in the PDF): for n = 6, every pair with 1 ≤ i ≤ j ≤ 6 is checked against (i *
j) % (i + j) == 0. For example, (1,1) gives 1 % 2 != 0, and (2,2) gives 4 % 4 == 0, which is valid.
*/
#include<stdio.h>
int countProductPairs(int n){
    int count=0;
    for (int i =1;i<=n;i++){
        for (int j =i;j<=n;j++){
            if (((i*j)%(i+j))==0){ count+=1;}
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d", countProductPairs(n));
    return 0;
}