#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum=0;
    scanf("%d", &n);

    float cnt=n;

    int arr[n];

    for(int i=0; i<n; i++){
        scanf(" %d", &arr[i]);
        sum+=arr[i];
    }

    printf("%d %.1f", sum, sum/cnt);
    return 0;
}