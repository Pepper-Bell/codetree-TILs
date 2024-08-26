#include <stdio.h>
#include <string.h>

int main() {
    int a,b,cnt=0;
    char str[2001]="";
    scanf("%d %d", &a, &b);
    a+=b;
    sprintf(str, "%d", a);

    int len = strlen(str);

    for(int i=0; i<len; i++){
        if(str[i]=='1'){
            cnt++;
        }
    }
    
    printf("%d", cnt);
    return 0;
}