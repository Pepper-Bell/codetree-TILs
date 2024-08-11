#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    char hi[]={"Hello"};

    scanf("%s", str);
    int len = strlen(str);

    for(int i=0; hi[i]!='\0'; i++){
        str[len] = hi[i];
        len++;
    }
    str[len] = '\0';

    printf("%s", str);
    return 0;
}