#include <stdio.h>

int main() {

    int n,m,a,b,check=0;
    scanf("%d %d", &n, &m);

    int arr[n][n];

    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        arr[a-1][b-1] = 1;

        if(arr[a-2][b-1]==1){check++;}//up
        if(arr[a][b-1]==1){check++;}//down
        if(arr[a-1][b-2]==1){check++;}//left
        if(arr[a-1][b]==1){check++;}//right

        if(check>=3){
            printf("1\n");
        }else{
            printf("0\n");
        }
        check = 0;
    }

    return 0;
}