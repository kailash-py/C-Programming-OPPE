#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i= 1; i<=n;i++){
        //decreasing part
        for (int j =i; j>=1; j--){
            printf("%d",j);
        }
        //increasing part
        for (int j =2; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}