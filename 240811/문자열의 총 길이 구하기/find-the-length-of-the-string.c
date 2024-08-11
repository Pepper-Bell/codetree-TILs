#include <stdio.h>
#include <string.h>

int main() {
    char str[10][20];
    int cnt=0;
    for(int i=0; i<10; i++){
        scanf("%s", &str[i]);
        cnt += strlen(str[i]);
    }

    printf("%d", cnt);
    return 0;
}