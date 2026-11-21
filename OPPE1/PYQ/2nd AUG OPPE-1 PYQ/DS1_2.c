/* 
DS Problem 2 [15 Marks] – Cold Storage Monitoring
A cold storage warehouse monitors its hourly temperature sensors to ensure food safety.
Rules:
A temperature reading is Safe if it is between -10°C and 4°C (inclusive).
A temperature reading is Danger if it falls outside the safe range (either below -10°C
or above 4°C).
C Programming OPPE-1 – All Questions
Page 9 of 26
Write a C program that reads the number of sensor logs and the temperature values, and
tracks the security status of the warehouse.
Input Format
The first line contains an integer N representing the number of readings .
The next N lines contain integers representing the temperature values.
Output Format
Print the count of Safe and Danger zones in the following format:
Safe: X
Danger: Y
Sample Input 1
4
-5
2
12
-8
Sample Output 1
Safe: 3
Danger: 1
*/
#include<stdio.h>
int main(){
    int n, safe=0, danger=0, val;
    scanf("%d",&n);
    for (int i= 0; i<n;i++){
        scanf("%d", &val);
        if (val>=-10 && val<=4){ safe+=1;}
        else if(val<-10 || val>4) { danger+=1;}
    }
    printf("Safe: %d\n", safe);
    printf("Danger: %d", danger);
    return 0;
}
