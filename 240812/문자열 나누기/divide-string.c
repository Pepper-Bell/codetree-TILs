#include <stdio.h>
#include <string.h>

int main() {
    int n, cnt=0;
    scanf("%d", &n);
    char str[n][1000];
    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<strlen(str[i]); j++){
            printf("%c", str[i][j]);
            cnt++;
            if(cnt==5){
                printf("\n");
                cnt = 0;
            }
        }
    }
    return 0;
}