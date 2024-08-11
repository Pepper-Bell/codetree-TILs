#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    scanf("%s", arr);
    for(int i=strlen(arr)-1; i>=0; i--){
        if(i%2!=0){
            printf("%c", arr[i]);
        }
    }
    return 0;
}