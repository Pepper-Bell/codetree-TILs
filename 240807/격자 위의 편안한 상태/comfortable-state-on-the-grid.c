#include <stdio.h>

int check(int a, int b);
static int arr[102][102]={0, };

int main() {

    int n,m,a,b;
    scanf("%d %d", &n, &m);

    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", check(a-1, b-1));
    }

    return 0;
}

int check(int a, int b){
    //up, down, left, right
    int sat = 0;
    int da[4]={-1, 1, 0, 0};
    int db[4]={0, 0, -1, 1};
    arr[a][b] = 1;
    for(int i=0; i<4; i++){
        if(arr[a+da[i]][b+db[i]]==1){
            sat++;
        }
    }
    
    if(sat>=3){
        return 1;
    }else{
        return 0;
    }
}