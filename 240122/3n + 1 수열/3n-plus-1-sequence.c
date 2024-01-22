#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;
    scanf("%d", &n);
    while(1){
        if(n==1){
            printf("%d", cnt);
            break;
        }
        if(n%2==0){
            cnt++;
            n/=2;
        }else{
            cnt++;
            n*=3;
            n++;
        }
    }
    return 0;
}