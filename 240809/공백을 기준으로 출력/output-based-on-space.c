#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);

    if(str1[strlen(str1)-1]=='\n'){
        str1[strlen(str1)-1] = '\0';
    }
    if(str2[strlen(str2)-1]=='\n'){
        str2[strlen(str2)-1] = '\0';
    }

    for(int i=0; i<strlen(str1); i++){
        if(str1[i]!=' '){
            printf("%c", str1[i]);
        }
    }

    for(int i=0; i<strlen(str2); i++){
        if(str2[i]!=' '){
            printf("%c", str2[i]);
        }
    }
    return 0;
}