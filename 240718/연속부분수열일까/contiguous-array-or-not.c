#include <stdio.h>

int main() {
    int n1, n2, cnt=0;

    scanf("%d %d", &n1, &n2);
    
    int arr[n1];
    int brr[n2];

    for(int i=0; i<n1; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i=0; i<n2; i++){
        scanf("%d ", &brr[i]);
    }

    for(int i=0; i<n1; i++){
        if(arr[i]==brr[cnt]){
            cnt++;
            if(cnt==n2){
                printf("Yes");
                return 0;
            }
        }else{
            cnt = 0;
        }
    }

    printf("No");

    return 0;
}