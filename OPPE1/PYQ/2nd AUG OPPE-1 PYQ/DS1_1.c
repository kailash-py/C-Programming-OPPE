/*DS – Section 1 [Attempt Both, 2 × 15 Marks]
DS Problem 1 [15 Marks] – Billing Module
You are developing a billing module for an e-commerce platform that applies discounts
based on the purchase amount of each item.
Rules:
If the purchase amount of an item is less than 100, 0% discount is applied.
If the purchase amount of an item is between 100 and 500 (inclusive), a 10% discount
is applied.
If the purchase amount of an item is greater than 500, a 20% discount is applied.
If the purchase amount of any item is less than or equal to 0, print "Invalid Input".
C Programming OPPE-1 – All Questions
Page 8 of 26
Write a C program that reads the number of items and their original prices, calculates the
final discounted price for each item, and prints the total amount the customer needs to
pay.
Input Format
The first line contains an integer N representing the number of items .
The next N lines contain floating-point numbers representing the price of each
item.
Output Format
Print the total payable amount rounded to two decimal places in the following format:
Total Amount: X
Where X is the total discounted sum.
If any input is invalid, print:
Invalid Input
Sample Input 1
3
50.00
150.00
600.00
Sample Output 1
Total Amount: 665.00
*/
#include<stdio.h>
int discount(int amnt){
    if (amnt<100){ 
        return 0;
    }
    else if (amnt>=100 && amnt<=500){
        return 10;
    }
    else if(amnt>500){
        return 20;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    double price;
    double total=0;
    for (int i=0; i<n;i++){
        scanf("%lf", &price);
        if (price<0){ printf("Invalid Input"); return 0;}
        int dis= discount(price);
        total= total+ price-((price*dis)/100);
    }
    printf("Total Amount: %.2lf", total);
}