#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum=0;
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf(" %d", &arr[i]);
        if(arr[i]%3==0 && arr[i]%2==1){
            sum += arr[i];
        }
    }
    printf("%d", sum);

    return 0;
}