#include <stdio.h>

int main() {
    int n,m,a,b;
    scanf("%d %d", &n, &m);

    int arr[9][9]={0,};
    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        arr[a-1][b-1]=1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}