#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b, sum=0;
    float cnt=0;
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++){
        if(i%5==0 || i%7==0){
            sum+=i;
            cnt++;
        }
    }

    printf("%d %.1f", sum, sum/cnt);
    return 0;
}