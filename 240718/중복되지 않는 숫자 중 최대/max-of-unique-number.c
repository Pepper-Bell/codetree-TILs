#include <stdio.h>
#include <limits.h>

int main() {
    
    int n, max=INT_MIN;
    scanf("%d", &n);
    int arr[n];
    int check[1000] = {0, };

    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
        check[arr[i]]++;
    }

    for(int i=max; i>=0; i--){
        if(check[i]==1){
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}