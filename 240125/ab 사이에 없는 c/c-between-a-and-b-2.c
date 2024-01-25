#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    for(int i=a; i<=b; i++){
        if(i%c==0){
            printf("NO");
            break;
        }else{
            printf("YES");
            break;
        }
    }

    
    return 0;
}