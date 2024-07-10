#include <stdio.h>

int main() {
    int n, tmp=1, a=1;
    scanf("%d ", &n);

    while(tmp<100){
        tmp = a;
        a = n;
        n += tmp;
        printf("%d ", tmp);
    }
    return 0;
}