#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double area,s;

    /* we are using Heron's formula for calculating Area
    
    calculate "semi perimeter" because we dont know which value is for the height and base
    */
    s= (a+b+c)/2.0;

    /*Area of triangle using Heron's formula=
    area= sqrt(s*(s-a)*(s-b)*(s-c))
    */
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2lf", area);
    return 0;
}