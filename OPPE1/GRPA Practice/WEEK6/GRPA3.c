#include<stdio.h>
void second_largest(int *a,int *b,int *c,int *d,int *e,int *res){
    int arr[5]={*a,*b,*c,*d,*e};
    int largest=arr[0];
    int second=arr[0];
    
    for (int i =0 ; i<5;i++){
        if (arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if (arr[i]>second){
            second= arr[i];
        }

    }
    *res=second;

}
int main(){
    int a,b,c,d,e,res;
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    second_largest(&a,&b,&c,&d,&e, &res);
    printf("%d", res);
    return 0;
}
