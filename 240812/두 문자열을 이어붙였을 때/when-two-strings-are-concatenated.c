#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101], ab[202]="", ba[202]="";
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
    ab[strlen(ab)]='\0';

    for(int i=0; a[i]!='\0'; i++){
        ba[strlen(b)+i]=a[i];
    }
    ba[strlen(ba)]='\0';

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