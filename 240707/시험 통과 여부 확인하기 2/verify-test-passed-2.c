#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0, input;
    scanf("%d ", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        input=0;
        arr[i]=0;
        for(int j=0; j<4; j++){
            scanf("%d ", &input);
            arr[i]+=input;
        }
        if(arr[i]/4 >= 60){
            printf("pass\n");
            cnt++;
        }else{
            printf("fail\n");
        }
    }
    printf("%d", cnt);
    return 0;
}