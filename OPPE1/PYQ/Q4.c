#include<stdio.h>
int rotateDigitsRight(int n, int k){
    int digits=0;
    int temp=n;
    while(temp>0){
        digits++;
        temp=temp/10;
    }
    k=k%digits;

    int divisor;
    for(int i =0; i<k; i++){
        divisor *=10;
    }
    int lastPart=n%divisor;
    int firstPart=n/divisor;
    
    int power =1;
    temp= firstPart;
    while(temp>0){
        power *=10;
        temp/=10;
    }
    return lastPart*power+firstPart;
}
int main(){
    int n ,k
    scanf("%d",&n);
    scanf("%d",&k);
    printf("%d", rotateDigitsRight(n,k));
    return 0;
}