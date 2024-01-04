#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int aMath, aEng, bMath, bEng;

    scanf("%d %d", &aMath, &aEng);
    scanf("%d %d", &bMath, &bEng);

    if(aMath>bMath && aEng>bEng){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}