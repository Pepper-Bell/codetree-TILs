#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d", &a, &b);

    int i = a;

    while(i<=b){
        if(i%2==0){
            printf("%d ", i);
        }

        i++;
    }
    return 0;
}