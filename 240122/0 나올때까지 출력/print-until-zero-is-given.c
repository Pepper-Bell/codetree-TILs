#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    while(1){
        scanf(" %d", &a);
        if(a==0){
            break;
        }
        printf("%d\n", a);
    }
    return 0;
}