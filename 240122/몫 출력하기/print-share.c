#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, cnt=0;
    while(1){
        if(cnt==3){break;}
        scanf(" %d", &a);
        if(a%2==0){
            cnt++;
            printf("%d\n", a/2);
        }else{
            continue;
        }
    }
    return 0;
}