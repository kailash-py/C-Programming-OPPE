#include<stdio.h>
int main(){
    //initialize
    double weight;
    double shippingRate;
    double shippingCost;

    //Read input
    scanf("%lf", &weight);
    scanf("%lf", &shippingRate);

    //calculate shipping cost
    shippingCost=weight*shippingRate;
    
    // Print
    printf("%.2lf", shippingCost);
    
}

/*

Input
45.37
2.00

Expected Output
90.74

Actual Output
90.74

*/