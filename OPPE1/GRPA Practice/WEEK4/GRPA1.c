#include<stdio.h>
int main(){
    int num, rev=0, original,rem;
    scanf("%d", &num);
    original=num;
    while(num!=0){
        rem= num%10;
        rev= rev*10+rem;
        num=num/10;
    }
    if (original==rev){
        printf("%d is a palindrome number",original);
    }
    else{
        printf("%d is not a palindrome number", original);
    }
    return 0;
}