#include<stdio.h>
#include<math.h>

int main(){
    //initialise
    double radius, height, volume;
    double pi=3.14;

    //read inputs
    scanf("%lf",&radius);
    scanf("%lf",&height);

    //calculate volume
    volume=pi*radius*radius*height;

    //print
    printf("%.2lf", volume);
    return 0;
}