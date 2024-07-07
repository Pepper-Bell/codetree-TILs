#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], evenSum=0, oddSum=0;

    for(int i=0; i<10; i++){
        scanf("%d ", &arr[i]);
        if(i%2==0){
            evenSum += arr[i];
        }else{
            oddSum += arr[i];
        }
    }

    if(evenSum>oddSum){
        printf("%d", evenSum-oddSum);
    }else{
        printf("%d", oddSum-evenSum);
    }
    return 0;
}