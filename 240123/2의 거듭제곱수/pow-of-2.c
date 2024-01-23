#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=1;
    scanf("%d", &n);

    while(n!=2){
        n/=2;
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}