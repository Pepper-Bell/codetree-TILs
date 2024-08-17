#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int cnt =0;
    scanf("%s", str);

    for(int i=0; i<strlen(str); i++){
        if(cnt==0 && str[i]=='e'){
            cnt++;
            continue;
        }else{
            printf("%c", str[i]);
        }
    }
    return 0;
}