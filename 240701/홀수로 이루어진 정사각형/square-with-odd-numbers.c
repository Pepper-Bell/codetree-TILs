#include <stdio.h>

int main() {
    int n;
    int tmp = 10;
    scanf("%d", &n);

    //meet the condition
    if(n<1 || n>9){
        return 0;
    }
    //meet the condition

    for(int i=1; i<=n; i++){
        tmp += i*2 - 1;
        for(int j=1; j<=n; j++){
            printf("%d ", tmp);
            tmp += 2;
        }
        printf("\n");
        tmp = 10;
    }
    return 0;
}