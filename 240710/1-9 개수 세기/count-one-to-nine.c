#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, tmp;
    scanf("%d ", &n);
    int arr[9] = {0, };

    for(int i=0; i<n; i++){
        scanf("%d ", &tmp);
        for(int j=0; j<10; j++){
            if(tmp == j+1){
                arr[j]++;
            }
        }
    }
    
    for(int i=0; i<9; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}