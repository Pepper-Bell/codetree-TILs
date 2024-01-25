#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for(int i=2; i<n; i++){
        if(n%i==0){
            printf("C");
            break;
        }else if(i==n-1){
            printf("P");
        }
    }
    return 0;
}