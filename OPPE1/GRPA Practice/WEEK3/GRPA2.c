#include <stdio.h>
int main(){
    int timeInSeconds, hours, minutes, seconds;
    scanf("%d", &timeInSeconds);

    //Solution below
    hours=timeInSeconds/3600;
    minutes=(timeInSeconds%3600)/60;
    seconds=timeInSeconds%60;


    printf("%d hours, %d minutes, %d seconds", hours, minutes, seconds);


}
/*
60 sec-> 1 min
3600sec-> 1 hr

*/

