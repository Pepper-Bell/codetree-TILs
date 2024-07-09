#include <stdio.h>

int main() {
    int arr[10];

    for(int i=0; i<10; i++){
        scanf("%d ", &arr[i]);
        if(arr[i]==0){
            break;
        }
        if(arr[i]%2==0){
            printf("%d ", arr[i]/2);
        }else{
            printf("%d ", arr[i]+3);
        }
    }
    
    return 0;
}