#include<stdio.h>
int main(){
    int gender;
    //initialise
    double age, weight, height, activityFactor, calories;

    //read inputs
    scanf("%lf %d %lf %lf %lf",&age,&gender,&weight,&height,&activityFactor);

    //calculate
    if (gender==1){
        calories= (88.362 + (13.397*weight)+(4.799*height)-(5.677*age))*activityFactor;
    }
    if(gender==2){
        calories=(447.593+(9.247*weight)+(3.098*height)-(4.330*age))*activityFactor;
    }
    printf("%.2lf", calories);
    return 0;
}