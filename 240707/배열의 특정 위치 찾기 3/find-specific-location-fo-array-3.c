#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], i=0;
    
    scanf("%d ", &arr[i]);

    while(arr[i]!=0){
        i++;
        scanf("%d ", &arr[i]);
    }

    printf("%d ", arr[i-1]+arr[i-2]+arr[i-3]);

    return 0;
}