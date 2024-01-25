#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for(int i=n; i>0; i--){
        for(int k=0; k<i; k++){
            for(int j=0; j<i; j++){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}