#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n ,cnt=0;
    scanf("%d", &n);

    for(int i=2; i<n; i++){
        if(n%i==0){
            cnt++;
        }
    }

    if(cnt==0){
        printf("N");
    }else{
        printf("C");
    }
    return 0;
}