#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            printf("  ");
        }

        for(int j=0; j<2*i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}