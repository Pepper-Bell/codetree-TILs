#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    scanf("%s", &str1);
    scanf("%s", &str2);

    printf("%d", strlen(str1)+strlen(str2));
    return 0;
}