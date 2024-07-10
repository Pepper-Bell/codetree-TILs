#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b, arr[9]={0, }, sum=0;
    scanf("%d %d", &a, &b);

    while(1){
       // printf("%d / %d = %d...%d\n",a, b, a/b, a%b);
        arr[a%b]++;
        a /= b;
        if(a<=1){
            break;
        }
    }

    for(int i=0; i<9; i++){
        sum += arr[i]*arr[i];
    }

    printf("%d", sum);
    return 0;
}