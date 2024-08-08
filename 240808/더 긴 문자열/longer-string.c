#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];
    scanf("%s %s", &str1, &str2);
    if(strlen(str1)>strlen(str2)){
        printf("%s %d", str1, strlen(str1));
    }else if(strlen(str1)==strlen(str2)){
        printf("same");
    }else{
        printf("%s %d", str2, strlen(str2));
    }
    return 0;
}