#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(sum+i>=n){
            if(sum+i==n){
                printf("%d", n);
                break;
            }
            printf("%d", sum);
            break;
        }
        sum+=i;
    }
    return 0;
}