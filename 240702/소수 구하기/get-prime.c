#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    scanf("%d ", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            if(i%j==0){
                cnt++;
            }
        }
        if(cnt==1){
            printf("%d ", i);
        }
        cnt=0;
    }
    return 0;
}