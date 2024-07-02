#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int start = 65;
    scanf("%d ", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c", start);
            start++;
        }
        printf("\n");
    }
    return 0;
}