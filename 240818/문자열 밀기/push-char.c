#include <stdio.h>
#include <string.h>

int main() {
    char tmp, str[21];
    scanf("%s", str);
    int index = strlen(str)-1;

    tmp = str[0];

    for(int i=0; i<index; i++){
        str[i]=str[i+1];
    }
    str[index]=tmp;
    printf("%s", str);
    return 0;
}