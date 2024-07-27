#include <stdio.h>

int main() {

    int n, min=100, tmp=0;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n ;i++){
        scanf("%d ", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(arr[i]>arr[j]){
                tmp = arr[i]-arr[j];
            }else{
                tmp = arr[j]-arr[i];
            }

            if(min>tmp){
                min = tmp;
            }
        }
    }

    printf("%d", min);

    return 0;
}