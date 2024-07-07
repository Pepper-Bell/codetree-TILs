#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d ", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
        printf("%d ", arr[i]*arr[i]);
    }
    return 0;
}