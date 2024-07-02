#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end, sum=0, cnt=0;
    scanf("%d %d", &start, &end);

    for(int i=start; i<=end; i++){
        for(int j=1; j<i; j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            cnt++;
        }
        sum=0;
    }

    printf("%d", cnt);
    return 0;
}