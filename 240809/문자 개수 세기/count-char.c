#include <stdio.h>
#include <string.h>

int main() {
    char str[100], n;
    int cnt = 0;
    fgets(str, 100, stdin);
    scanf("%c", &n);

    for(int i=0; i<strlen(str); i++){
        if(str[i]==n){
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}