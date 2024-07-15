#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, cnt=0;
    scanf("%d %d ", &n, &m);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
        if(m == arr[i]){cnt++;}
    }

    printf("%d", cnt);
    return 0;
}