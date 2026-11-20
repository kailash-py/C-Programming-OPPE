#include<stdio.h>

int billAmount(int unit){
    if (unit<=100){
        return unit*5;
    }
    else if (unit>100 && unit <=200){
        return 500+ (unit-100)*6;
    }
    else if (unit>200 && unit <=300){
        return 1100+ (unit-200)*8;
    }
    else{
        return 1900+(unit-300)*10;
    }
}

double subsidy( int amnt){
    if (amnt<=1000){
        return amnt- amnt*0.15;
    }
    else if (amnt>1000 && amnt<=2000){
        return amnt-amnt*0.10;
    }
    else if (amnt>2000){
        return amnt;
    }
}
int main(){
    int unit;
    int amnt;
    scanf("%d", &unit);
    // double subsidy;
    amnt=billAmount(unit);
    double bill= subsidy(amnt);
    printf("%.2lf", bill);

}