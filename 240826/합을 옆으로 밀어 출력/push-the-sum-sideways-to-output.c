#include <stdio.h>
#include <string.h>

int main() {
    int n, tmp, sum=0;
    char str[500001]="", ctmp;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &tmp);
        sum += tmp;
    }

    sprintf(str, "%d", sum);

    int len = strlen(str);

    ctmp = str[0];
    for(int i=0; i<len-1; i++){
        str[i]=str[i+1];
    }
    str[len-1]=ctmp;

    printf("%s", str);


    return 0;
}