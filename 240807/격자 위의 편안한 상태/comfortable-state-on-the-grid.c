#include <stdio.h>

int main() {

    int n,m,a,b,check=0;
    scanf("%d %d", &n, &m);

    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=0;
        }
    }

    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        arr[a-1][b-1] = 1;

        if(arr[a-2][b-1]==1){
            if(a-2 < 0){
                continue;
            }else{
                check++;
            }}//up
        if(arr[a][b-1]==1){
            if(a > n){
                continue;
            }else{
                check++;
            }}//down
        if(arr[a-1][b-2]==1){
            if(b-2 < 0){
                continue;
            }else{
                check++;
            }}//left
        if(arr[a-1][b]==1){
            if(b > n){
                continue;
            }else{
                check++;
            }}//right

        if(check>=3){
            printf("1\n");
        }else{
            printf("0\n");
        }
        check = 0;
    }

    return 0;
}