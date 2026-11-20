#include<stdio.h>
#include <math.h>
int main(){
    //Variables initialisations
    double diameter, costPerInch, costPerTopping, totalCost,area;
    double pi=3.14;\
    int numToppings;


    //reading inputs
    scanf("%lf",&diameter);
    scanf("%lf",&costPerInch);
    scanf("%d",&numToppings);
    scanf("%lf",&costPerTopping);

    double radius;
    radius = diameter/2.0;
    area=pi*radius*radius;
    totalCost= (area*costPerInch)+(numToppings*costPerTopping);
    printf("%.2lf", totalCost);
    return 0;
}