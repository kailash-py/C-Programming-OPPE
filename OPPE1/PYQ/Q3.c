#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    // (i*(i+1))+i
    int sum=0;
    for ( int i=1 ; i<=n; i++){
        if (i%2==1){
            sum+= (i*(i+1))+i;
        }
        else{
            sum -=((i*(i+1))+i);
        }
    }
    printf("%d", sum);
    return 0;
}