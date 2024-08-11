#include <stdio.h>
#include <string.h>

int main() {
    char str[21]; 
    int cnt=0;
    scanf("%s", str);

    for(int i=0; i<strlen(str); i++){
        if(str[i]=='e' && str[i+1]=='e'){
            printf("Yes ");
            break;
        }
        if(i==strlen(str)-1){
            printf("No ");
        }
    }
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='a' && str[i+1]=='b'){
            printf("Yes ");
            break;
        }
        if(i==strlen(str)-1){
            printf("No ");
        }
    }
    return 0;
}