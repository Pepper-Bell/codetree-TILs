#include <stdio.h>
#include <string.h>

int main() {
    int n, sum=0;
    char str[10001]="";
    scanf("%d", &n);
    sprintf(str, "%d", n);
    int len = strlen(str);

    for(int i=0; i<len; i++){
        sum += str[i]-'0';
    }

    printf("%d", sum);

    return 0;
}