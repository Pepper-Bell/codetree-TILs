#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int input, arr[10] = {0, };
    for(int i=0; i<100; i++){
        scanf("%d ", &input);
        if(input==0){break;}

        for(int j=0; j<10; j++){
            if(input/10 == j+1){
                arr[j]++;
            }
        }
    }

    for(int i=10; i>0; i--){
        printf("%d - %d\n", i*10, arr[i-1]);
    }
    return 0;
}