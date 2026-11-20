#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    int eligible=0, border=0, notEligible=0;
    for (int i=0; i<n;i++){
        scanf("%d", &arr[i]);
        if (arr[i]>=75){ eligible+=1;}
        else if (arr[i]>=40 && arr[i]<=75){border+=1;}
        else if (arr[i]<40){notEligible+=1;}
    }
    printf("Eligible: %d\n",eligible);
    printf("Borderline: %d\n",border);
    printf("Not Eligible: %d\n",notEligible);
    return 0;


}
