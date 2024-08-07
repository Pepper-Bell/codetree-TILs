#include <stdio.h>

int main() {
    int n,m,r,c,cnt=1;
    scanf("%d %d", &n, &m);
    int arr[9][9]={0, };

    for(int i=0; i<m; i++){
        scanf("%d %d", &r, &c);
        arr[r-1][c-1]=cnt;
        cnt++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}