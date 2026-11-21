/*
ES Problem 1 [15 Marks] – Parking Charge
You are developing a parking management system for a shopping mall. The parking charge
depends on the number of hours a vehicle is parked.
Charging rules:
If the parking duration is greater than 5 hours, the customer is charged ₹50 per hour.
Otherwise, the customer is charged ₹30 per hour.
Complete the given C program that takes the parking duration (in hours) as input and
prints the total parking charge.
Input Format
The first line contains an integer representing the hours .
Output Format
Print a single integer: the total parking charge.
Sample Input 1
8
Sample Output 1
400
Explanation: hours = 8. Since 8 > 5, charge = 8 × 50 = 400.
Sample Input 2
4
Sample Output 2
120

*/
#include<stdio.h>
int parkingCharge(int hrs){
    int charge;
    if (hrs>5){
        charge= hrs*50;
        return charge;
    }
    else{
        charge= hrs*30;
        return charge;
    }
}
int main(){
    int hrs;
    scanf("%d", &hrs);
    int charge;
    int charges= parkingCharge(hrs);
    printf("%d", charges);
    return 0;
}