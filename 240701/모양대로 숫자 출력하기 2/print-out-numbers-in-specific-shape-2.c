#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 2;
    scanf("%d", &n);

    //meet the condition
    if(n<1 || n >15){
        return 0;
    }
    //meet the condition

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", cnt);
        }
        if(cnt==8){
            cnt = 2;
        }else{
            cnt += 2;
        }
        printf("\n");
    }
    return 0;
}