#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n;
    scanf("%s", str);
    scanf("%d", &n);

    for(int i=strlen(str)-1; i>=strlen(str)-n; i--){
        printf("%c", str[i]);
    }
    return 0;
}