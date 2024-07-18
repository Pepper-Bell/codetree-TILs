#include <stdio.h>

int main() {
    int n, cnt=0;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]==2){
            cnt++;
        }
        if(cnt==3){
            printf("%d", i+1);
            break;
        }
    }
    return 0;
}