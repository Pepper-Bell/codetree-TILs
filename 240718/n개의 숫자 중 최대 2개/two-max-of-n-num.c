#include <stdio.h>
#include <limits.h>

int main() {

    int n, max = INT_MIN, bmax = INT_MIN;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
        if(arr[i]>=max){
            bmax = max;
            max = arr[i];
        }else if(arr[i]>bmax){
            bmax = arr[i];
        }

    }

    printf("%d %d", max, bmax);

    return 0;
}