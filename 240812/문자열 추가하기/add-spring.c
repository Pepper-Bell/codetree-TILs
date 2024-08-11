#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char hi[10]={"Hello"};

    scanf("%s", str);

    strcat(str, hi);

    printf("%s", str);
    return 0;
}