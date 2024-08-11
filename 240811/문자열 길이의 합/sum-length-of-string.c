#include <stdio.h>
#include <string.h>

int main() {
    int n,cnt=0,sum=0;
    scanf("%d", &n);
    char str[n][100];
    for(int i=0; i<n; i++){
        scanf("%s", &str[i]);
        if(str[i][0]=='a'){
            cnt++;
        }
        sum += strlen(str[i]);
    }
    printf("%d %d",sum, cnt);
    return 0;
}