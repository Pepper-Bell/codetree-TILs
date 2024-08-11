#include <stdio.h>

int main() {
    char str[5][20] = {"apple", "banana", "grape", "blueberry", "orange"};
    char n;
    int cnt = 0;

    scanf("%c", &n);

    for(int i=0; i<5; i++){
        if(str[i][2]==n){
            printf("%s\n", str[i]);
            cnt++;
        }else if(str[i][3]==n && str[i][2]!=n){
            printf("%s\n", str[i]);
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}