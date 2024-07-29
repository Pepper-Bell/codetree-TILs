#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(j%2==0){
                printf("%d ", i + j*n);
            }else{
                printf("%d ", j*n - i + n -1);
            }
        }
        printf("\n");
    }
    return 0;
}