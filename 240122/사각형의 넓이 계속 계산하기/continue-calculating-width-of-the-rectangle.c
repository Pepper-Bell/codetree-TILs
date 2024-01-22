#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int w, h;
    char alpa;
    while(1){
        scanf(" %d %d %c", &w, &h, &alpa);
        if(alpa=='C'){
            printf("%d", w*h);
            break;
        }else{
            printf("%d\n", w*h);
        }
    }
    return 0;
}