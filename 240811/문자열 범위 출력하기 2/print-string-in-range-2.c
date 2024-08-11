#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n;
    scanf("%s", str);
    scanf("%d", &n);

    for(int i=strlen(str)-1; i>=0; i--){
        if(i == strlen(str)-n-1){break;}
        printf("%c", str[i]);
    }
    return 0;
}