#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int max = 19;

    for(int i=1; i<=max; i++){
        for(int j=1; j<=max; j++){
            printf("%d * %d = %d", i, j, i*j);
            if(j%2==1 && j!= max){
                printf(" / ");
            }else{
                printf("\n");
            }
        }
    }
    return 0;
}