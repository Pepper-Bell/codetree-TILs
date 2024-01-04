#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", a<b && a<c);
    printf(" %d", a==b && b==c);
    return 0;
}