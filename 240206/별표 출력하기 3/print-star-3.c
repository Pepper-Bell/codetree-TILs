#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int temp = n*2-1;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("  ");
        }
        for(int j=0; j<temp; j++){
            printf("* ");
        }
        printf("\n");
        temp -=2;
    }
    return 0;
}