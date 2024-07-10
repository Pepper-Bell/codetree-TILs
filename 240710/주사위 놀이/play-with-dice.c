#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[6] = {0, };
    int input;

    for(int i=0; i<10; i++){
        scanf("%d ", &input);
        for(int j=0; j<6; j++){
            if(j+1 == input){
                arr[j]++;
            }
        }
    }

    for(int i=0; i<6; i++){
        printf("%d - %d\n", i+1, arr[i]);
    }
    return 0;
}