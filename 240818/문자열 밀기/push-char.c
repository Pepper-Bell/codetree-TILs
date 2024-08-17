#include <stdio.h>
#include <string.h>

int main() {
    char tmp, str[21];
    scanf("%s", str);

    for(int i=0; i<strlen(str); i++){
        if(i==0){
            tmp = str[i];
        }
        str[i]=str[i+1];
    }
    str[strlen(str)]=tmp;
    printf("%s", str);
    return 0;
}