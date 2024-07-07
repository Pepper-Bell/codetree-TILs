#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0, i=1;
    scanf("%d ", &n);

    while(cnt!=2){
        if(n*i%5==0){
            cnt++;
        }
        printf("%d ", n*i);
        i++;
    }
    return 0;
}