#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", i+n*j);
        }
        printf("\n");
    }
    return 0;
}