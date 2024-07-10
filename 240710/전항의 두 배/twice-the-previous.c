#include <stdio.h>

int main() {
    int a,b,tmp;
    scanf("%d %d", &a, &b);

    for(int i=0; i<10; i++){
        printf("%d ", a);
        tmp = a;
        a = b;
        b = b + 2*tmp;
    }
    return 0;
}