#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c=0, h=0, t =0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        if(i==0){

        }else if(i%12==0){
            t++;
        }else if(i%3==0){
            h++;
        }else if(i%2==0){
            c++;
        }
    }

    printf("%d %d %d", c, h, t);
    return 0;
}