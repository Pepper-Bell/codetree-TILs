#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    scanf("%d %d", &n, &m);

    int arr1[n][m], arr2[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d ", &arr1[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d ", &arr2[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i][j]==arr2[i][j]){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }

    

    return 0;
}