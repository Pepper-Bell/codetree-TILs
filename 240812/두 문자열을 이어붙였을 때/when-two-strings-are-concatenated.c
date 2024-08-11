#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], ab[200], ba[200];
    int len;
    scanf("%s", a);
    scanf("%s", b);

    for(int i=0; a[i]!='\0'; i++){
        ab[i]=a[i];
    }
    
    for(int i=0; b[i]!='\0'; i++){
        ab[strlen(a)+i]=b[i];
        ba[i]=b[i];
    }

    for(int i=0; a[i]!='\0'; i++){
        ba[strlen(b)+i]=a[i];
    }

    len = strlen(ab);

    for(int i=0; i<len; i++){
        if(ab[i]!=ba[i]){
            printf("false");
            break;
        }
        if(i==len-1){
            printf("true");
        }
    }
    return 0;
}