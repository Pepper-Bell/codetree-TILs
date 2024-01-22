#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, prod;
    scanf("%d", &n);
    prod = n;
    for(int i=1; i<=n; i++){
        prod/=i;
        if(prod <= 1){
            printf("%d", i);
            break;
        }
    }
    return 0;
}