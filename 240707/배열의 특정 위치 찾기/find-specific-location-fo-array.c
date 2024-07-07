#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], sum2=0, sum3=0, cnt=0;
    for(int i=0; i<10; i++){
        scanf("%d ", &arr[i]);
        if((i+1)%2==0){
            sum2+=arr[i];
        }
        if((i+1)%3==0){
            sum3+=arr[i];
            cnt++;
        }
    }
    printf("%d %.1lf", sum2, (double)sum3/cnt);
    return 0;
}