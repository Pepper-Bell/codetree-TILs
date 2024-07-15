#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    int n;

    scanf("%c", &n);

    for(int i=0; i<6; i++){
        if(n == str[i]){
            printf("%d", i);
            break;
        }
        if(i==5){
            printf("None");
        }
    }
    return 0;
}