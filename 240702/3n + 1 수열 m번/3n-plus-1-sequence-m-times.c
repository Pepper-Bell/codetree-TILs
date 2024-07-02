#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, cnt=0;
    scanf("%d ", &m);

    for(int i=0; i<m; i++){
        scanf("%d ", &n);
        while(n!=1){
            if(n%2==0){
                n /= 2;
                cnt++;
            }else{
                n *= 3;
                n++;
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }
    return 0;
}