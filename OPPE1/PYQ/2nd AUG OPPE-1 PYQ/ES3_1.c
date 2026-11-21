/*
ES – Section 3 [Attempt Any One, 1 × 30 Marks]
ES Problem 1 [30 Marks] – Alternating Number
A number is called an Alternating Number if its digits alternate between even and odd.
For example:
1234 → Alternating Number
8181 → Alternating Number
C Programming OPPE-1 – All Questions
Page 5 of 26
1357 → Not an Alternating Number
2245 → Not an Alternating Number
Write the following function:
int isAlternatingNumber(int n);
The function should return:
1 if the given number is an Alternating Number.
0 otherwise.
Input Format
The first line contains an integer T , representing the number of test cases.
Each of the next T lines contains a positive integer n .
Output Format
For each test case, return:
1 if the number is an Alternating Number.
Otherwise, return 0.
Sample Input
6
7
12
8181
2245
1357
9070
Sample Output
1
1
1
0
0
1
Explanation:
C Programming OPPE-1 – All Questions
Page 6 of 26
7 → Only one digit, so it is an Alternating Number.
12 → Odd, Even → Alternating.
8181 → Even, Odd, Even, Odd → Alternating.
2245 → Even, Even, Odd, Odd → Not Alternating.
1357 → All digits are odd → Not Alternating.
9070 → Odd, Even, Odd, Even → Alternating
*/
#include<stdio.h>
int isAlternatingNumber(int n)
{
    // Store the last digit of the number
    int last = n % 10;

    // Remove the last digit
    n /= 10;

    // Check remaining digits one by one
    while(n > 0)
    {
        // Get the current digit
        int curr = n % 10;

        // If both digits are odd or both are even,
        // the number is not alternating
        if((curr % 2) == (last % 2))
            return 0;

        // Update last digit for next comparison
        last = curr;

        // Remove the current digit
        n /= 10;
    }

    // If no same-parity adjacent digits are found,
    // the number is alternating
    return 1;
}
int main()
{
    int T;

    scanf("%d", &T);
    int nums[T];
    int result[T];

    for(int i = 0; i < T; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i=0;i<T;i++){
        result[i]= isAlternatingNumber(nums[i]);
        printf("%d\n", result[i]);
    }
    return 0;
}