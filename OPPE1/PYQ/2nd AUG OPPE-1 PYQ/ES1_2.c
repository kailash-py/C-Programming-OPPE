/*
ES Problem 2 [15 Marks] – Fixed Deposit Interest
A bank offers different interest rates for fixed deposits based on the customer's age and
the deposit amount.
Interest rules:
If the customer is a senior citizen (age ≥ 60):
If the deposit amount is at least ₹1,00,000, interest rate = 8%.
Otherwise, interest rate = 7%.
Otherwise:
If the deposit amount is at least ₹1,00,000, interest rate = 7%.
Otherwise, interest rate = 6%.
Complete the given C program that takes the customer's age and deposit amount as
input and prints the interest amount.
Input Format
The first line contains an integer representing the age .
The second line contains an integer representing the deposit_amount .
Output Format
Print a single integer: the interest amount.
If the calculated interest is a floating-point number, ignore the decimal part and print
only the integer value.
Sample Input 1
65
200000
Sample Output 1
16000
Explanation: Senior citizen, deposit = ₹200000, interest = 8%, interest amount = 200000 ×
8 / 100 = 16000
*/
#include<stdio.h>
int interestRate(int age, int deposit){
    int rate=0;
    if (age>=60){
        if (deposit>=100000){
            rate = 8;
            return rate;
        }
        else{
            rate= 7;
            return rate;
        }
    }
    else{
        if (deposit>=100000){
            rate =7;
            return rate;
        }
        else{
            rate =6;
            return rate;
        }
    }
}
int main(){
    int age, amount;
    scanf("%d", &age);
    scanf("%d", &amount);
    int interestrate=interestRate(age, amount);
    int interest = (amount*interestrate)/100;
    printf("%d", interest);
    return 0;
}