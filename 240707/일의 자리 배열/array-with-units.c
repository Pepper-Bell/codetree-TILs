#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b, tmp;
    scanf("%d %d", &a, &b);
    printf("%d %d ", a, b);

    for(int i=0; i<8; i++){
        tmp = (a+b)%10;
        printf("%d ", tmp);
        a = b;
        b= tmp;
        
    }
    return 0;
}