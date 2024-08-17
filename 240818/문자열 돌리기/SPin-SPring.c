#include <stdio.h>
#include <string.h>

int main() {
    char str[11], tmp;
    scanf("%s", str);
    int maxIndex = strlen(str)-1;
    
    for(int i=0; i<=strlen(str); i++){
        printf("%s\n", str);
        tmp = str[maxIndex];
        for(int j=maxIndex; j>0; j--){
            str[j]=str[j-1];
        }
        str[0]=tmp;
    }

    return 0;
}