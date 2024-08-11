#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char hi[]={"Hello"};

    scanf("%s", str);
    int len = strlen(str);

    for(int i=0; hi[i]!='\0'; i++){
        str[len] = hi[i];
        len++;
    }

    printf("%s", str);
    return 0;
}