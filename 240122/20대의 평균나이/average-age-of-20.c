#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;
    float sum=0;
    while(1){
        scanf(" %d", &n);
        if(n<30 || n<20){
            cnt++;
            sum+=n;
        }else{
            printf("%.2f", sum/cnt);
            break;
        }
    }
    return 0;
}