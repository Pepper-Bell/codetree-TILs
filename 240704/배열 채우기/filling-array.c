#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], check=0;


    for(int i=0; i<10; i++){
        scanf("%d ", &arr[i]);
        if(arr[i]==0){
            check = i-1;
            break;
        }
    }

    for(int i=check; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}