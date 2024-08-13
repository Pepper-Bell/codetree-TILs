#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    scanf("%s", arr);

    for(int i=0; i<strlen(arr); i++){
        if(i==1 || i==strlen(arr)-2){
            printf("a");
        }else{
            printf("%c", arr[i]);
        }
    }
    return 0;
}