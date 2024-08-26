#include <stdio.h>
#include <string.h>

int main() {
    char str[101]="";
    scanf("%s", str);
    
    while(strcmp(str, "END")!=0){
        for(int i=strlen(str)-1; i>=0; i--){
            printf("%c", str[i]);
        }
        printf("\n");
        scanf("%s", str);
    }

    return 0;
}