#include <stdio.h>

static int arr[101][101] ={0, };
static int cnt = 1;

int diagonal(int a, int b){
    arr[a][b] = cnt;
    cnt++;
    if(arr[a+1][b-1]==-1){
        diagonal(a+1, b-1);
    }else{
        return 0;
    }
}

int main() {

    int n,m;
    scanf("%d %d", &n, &m);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            arr[i][j] = -1;
        }
    }

    //왼쪽아래 있으면 계속 넣는 1번 함수 필요
    //없으면 열을 오른쪽으로 변경해서 1번 함수 계속하는 2번 함수 필요 오른쪽 더이상 없으면
    //행을 아래로 하나 변경해서 -1인 구역 찾아서 1번 시행
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(arr[i][j]==-1){
                diagonal(i,j);
            }
        }
    }



    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}