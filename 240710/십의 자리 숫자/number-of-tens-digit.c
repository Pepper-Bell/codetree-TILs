#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int input, arr[9] = {0, };
    for(int i=0; i<100; i++){
        scanf("%d ", &input);
        for(int j=0; j<9; j++){
            if(input/10 == j+1){
                arr[j]++;
            }
        }
    }

    for(int i=0; i<9; i++){
        printf("%d - %d\n", i+1, arr[i]);
    }
    return 0;
}