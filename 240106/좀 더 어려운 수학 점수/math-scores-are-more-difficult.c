#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int am, ae, bm, be;
    scanf("%d %d", &am, &ae);
    scanf("%d %d", &bm, &be);

    if(am>bm){
        printf("A");
    }else if(am==bm){
        if(ae>be){
            printf("A");
        }else{
            printf("B");
        }
    }else{
        printf("B");
    }
    return 0;
}