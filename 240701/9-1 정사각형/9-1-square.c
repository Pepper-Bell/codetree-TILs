#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 9;
    scanf("%d", &n);

    //meet the condition
    if(n<1 || n>9){
        return 0;
    }
    //meet the condition

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d", cnt);
            if(cnt==1){
                cnt = 9;
            }else{
                cnt --;
            }
        }
        printf("\n");
    }
    return 0;
}