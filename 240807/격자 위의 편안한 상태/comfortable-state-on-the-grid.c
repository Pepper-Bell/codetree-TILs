#include <stdio.h>
#include <stdbool.h>

int check(int a, int b);
bool range(int a, int b);

static int arr[100][100]={0, };
static int n,m;

int main() {

    int a,b;
    scanf("%d %d", &n, &m);

    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", check(a-1, b-1));
    }

    return 0;
}

bool range(int a, int b){
    return 0 <= a && a < n && 0 <= b && b < n;
}

int check(int a, int b){
    //up, down, left, right
    int sat = 0;
    int da[4]={-1, 1, 0, 0};
    int db[4]={0, 0, -1, 1};
    arr[a][b] = 1;
    for(int i=0; i<4; i++){
        if(range(a+da[i],b+db[i]) && arr[a+da[i]][b+db[i]]==1){
            sat++;
        }
    }
    
    if(sat==3){
        return 1;
    }else{
        return 0;
    }
}