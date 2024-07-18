#include <stdio.h>
#include <limits.h>

int main() {

    int n, min=INT_MAX, cnt=0;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
        if(arr[i]<min){
            min = arr[i];
            cnt = 0;
        }
        if(arr[i]==min){
            cnt++;
        }
    }

    printf("%d %d", min, cnt);

    return 0;
}