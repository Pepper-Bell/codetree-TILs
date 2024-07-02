#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 1;
    scanf("%d ", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("  ");
        }
        for(int k=n-i; k>0; k--){
            printf("%d ", cnt);
            cnt++;
            if(cnt==10){
                cnt=1;
            }
        }
        printf("\n");
    }
    return 0;
}